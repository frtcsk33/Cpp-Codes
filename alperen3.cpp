#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000

const int INF = 1e9;

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];

void ilklendirme(int V, vector<vector<int> >& graph)
{
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++) {
            dis[i][j] = graph[i][j];

            if (graph[i][j] == INF)
                Next[i][j] = -1;
            else
                Next[i][j] = j;
        }
    }
}


vector<int> enKisaYol(int u, int v)
{
   
    if (Next[u][v] == -1)
        return {};

   
    vector<int> path = { u };
    while (u != v) {
        u = Next[u][v];
        path.push_back(u);
    }
    return path;
}

void floydWarshall(int V)
{
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {

                if (dis[i][k] == INF || dis[k][j] == INF)
                    continue;

                if (dis[i][j] > dis[i][k] + dis[k][j]) {
                    dis[i][j] = dis[i][k] + dis[k][j];
                    Next[i][j] = Next[i][k];
                }
            }
        }
    }
}


void Yol_yazdir(vector<int>& path,vector<vector<int> >& graph)
{
    int yol=0,k=0,i;
    int n = path.size();
        
for (i = 0; i < n-1; i++){
            if(path[i]==7){
                k=path[i];
                yol=yol+graph[path[i]][0];
            }
            
            else{
                k=path[i];
                yol=yol+graph[path[i]][k+1];        
            }
        }
        cout<<"-->"<<yol<<" km";
}

int main()  //  AKDENİZ BÖLGESİ
{
    int V = 8;
    vector<vector<int> > graph
            // 0  1   2    3      4   5    6    7   
        = { { 0, 32, 126, 550, 600, 730, 680,770 }, //0-Isparta
            { 32, 0, 129, 600, 630, 800, 720,780 }, //1-Burdur
            { 126, 129, 0, 482, 560, 620, 600,640 }, //2-Antalya
            { 550, 600, 482, 0, 90, 250, 200,190 }, //3-Mersin
            { 550, 600, 480, 90, 0, 150, 92, 180 }, //4-Adana
            { 600, 630, 560, 250,150, 0, 108,130 },     //5-Kahramanmaraş
            { 680, 720, 600, 200,92, 108, 0, 140 },     //6-osmaniye
            { 770, 780, 640, 190,150, 0, 130,140 }    //7-Hatay
        };

    
    ilklendirme(V, graph);

    floydWarshall(V);
    vector<int> path;

     
    cout << "Burdur'dan Mersin'e en kisa yol";
     path = enKisaYol(1, 3);
     Yol_yazdir(path,graph);
     cout<<endl<<endl;
      
      cout << "Antalya'dan Osmaniye'e en kisa yol";
      path = enKisaYol(2, 6);
      Yol_yazdir(path,graph);
     cout<<endl<<endl;
      
      cout << "Adana'dan Kahramanmaras'a en kisa yol";
      path = enKisaYol(4, 5);
      Yol_yazdir(path,graph);

     cout<<endl<<endl;
      cout << "Isparta'dan Hatay'a en kisa yol";
      path = enKisaYol(0, 7);
      Yol_yazdir(path,graph);

    cout<<endl<<endl;
    cout << "Mersin'den Hatay'a en kisa yol";
      path = enKisaYol(3, 7);
      Yol_yazdir(path,graph);

    cout<<endl<<endl;
    cout << "Hatay'dan Isparta'ya en kisa yol";
    path = enKisaYol(7, 0);

    Yol_yazdir(path,graph);
    return 0;
}