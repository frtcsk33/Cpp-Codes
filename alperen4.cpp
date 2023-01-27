#include <iostream>
#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000
// Infinite value for array
const int INF = 1e9;

int dis[MAXN][MAXN];
int Next[MAXN][MAXN];

// Initializing the distance and
// Next array
void initialise(int V,
                vector<vector<int> >& graph)
{
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            dis[i][j] = graph[i][j];

            // No edge between node
            // i and j
            if (graph[i][j] == INF)
                Next[i][j] = -1;
            else
                Next[i][j] = j;
        }
    }
}

// Function construct the shortest
// path between u and v
vector<int> constructPath(int u,
                        int v)
{
    // If there's no path between
    // node u and v, simply return
    // an empty array
    if (Next[u][v] == -1)
        return {};

    // Storing the path in a vector
    vector<int> path = { u };
    while (u != v) {
        u = Next[u][v];
        path.push_back(u);
    }
    return path;
}

// Standard Floyd Warshall Algorithm
// with little modification Now if we find
// that dis[i][j] > dis[i][k] + dis[k][j]
// then we modify next[i][j] = next[i][k]
void floydWarshall(int V)
{
    for (int k = 0; k < V; k++) {
        for (int i = 0; i < V; i++) {
            for (int j = 0; j < V; j++) {

                // We cannot travel through
                // edge that doesn't exist
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

// Print the shortest path
void printPath(vector<int>& path,vector<vector<int> >& graph)
{
    int yol=0,k=0,i;
    int n = path.size();
        
for (i = 0; i < n-1; i++){
            if(path[i]==7){
                k=path[i];
                cout<<graph[path[i]][0]<<" ";
                yol=yol+graph[path[i]][0];
            }
            
            else{
                k=path[i];
                cout<<graph[path[i]][k+1]<<" "<<" ";
                yol=yol+graph[path[i]][k+1];        
            }
        }
        cout<<yol<<" km";
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

    // Function to initialise the
    // distance and Next array
    initialise(V, graph);

    // Calling Floyd Warshall Algorithm,
    // this will update the shortest
    // distance as well as Next array
    floydWarshall(V);
    vector<int> path;

     //Path from node 1 to 3
     cout << "Shortest path from 1 to 3: ";
     path = constructPath(1, 3);
     printPath(path,graph);
     cout<<endl<<endl;
      // Path from node 0 to 2
      cout << "Shortest path from 0 to 2: ";
      path = constructPath(0, 3);
      printPath(path,graph);
     cout<<endl<<endl;
      // path from node 3 to 2
      cout << "Shortest path from 2 to 5: ";
      path = constructPath(4, 5);
      printPath(path,graph);

     cout<<endl<<endl;
      cout << "Shortest path from 0 to 7: ";
      path = constructPath(0, 7);
      printPath(path,graph);

    cout<<endl<<endl;
    cout << "Shortest path from 3 to 7: ";
      path = constructPath(3, 7);
      printPath(path,graph);

      cout<<endl<<endl;
    cout << "Shortest path from 7 to 0: ";
      path = constructPath(7, 0);

      printPath(path,graph);

    
    
    
    //  cout<<endl<<endl;
    //  path = constructPath(3, 0);
    //  printPath(3,0,path,graph);

    scanf(" ");
    return 0;
}