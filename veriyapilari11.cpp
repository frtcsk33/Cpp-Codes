#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> iPair;

struct Graph{
    int DUGUM, KOSE;
    vector <pair<int, iPair>>koseler;
    Graph(int DUGUM, int KOSE){
        this->DUGUM = DUGUM;
        this->KOSE = KOSE;
    }

    void kose_ekle(int u, int v, int w){
        koseler.push_back({w, {u,v}});
    }
    int kruskal_min_span_tree();
};


struct dagitilmis_dugum_esleri
{
    int *ebeveyn_ata, *seviye;
    int n;
    dagitilmis_dugum_esleri(int n)
    {
        this->n = n;
        ebeveyn_ata = new int[n+1];
        seviye = new int[n+1];
        for(int i = 0; i <=n; i++){
            seviye[i] = 0;
            ebeveyn_ata[i] = i;
        }
    }
    int bul(int u)
    {
        if(u != ebeveyn_ata[u])
            ebeveyn_ata[u] = bul(ebeveyn_ata[u]);
        return ebeveyn_ata[u];
    }
    void merge(int x, int y)
    {
        x = bul(x), y=bul(y);

        if(seviye[x] > seviye[y])
            ebeveyn_ata[y] = x;
        else
            ebeveyn_ata[x] = y;

        if(seviye[x] == seviye[y])
            seviye[y]++;
    }
};

int Graph::kruskal_min_span_tree()
{
    int mst_wt = 0;
    sort(koseler.begin(), koseler.end());
    dagitilmis_dugum_esleri ds(DUGUM);
    vector <pair<int, iPair> >::iterator it;

    for(it=koseler.begin(); it!=koseler.end(); it++)
    {
        int u = it->second.first;
        int v = it->second.second;
        int set_u = ds.bul(u);
        int set_v = ds.bul(v);

        if(set_u != set_v)
        {
            cout<< u <<" - "<< v <<endl;
            mst_wt += it->first;
            ds.merge(set_u, set_v);

        }

    }
    return mst_wt;
}






int main(){

    int V = 9, E = 14;
    Graph g(V, E);

    g.kose_ekle(0,1,4);
    g.kose_ekle(0,7,8);
    g.kose_ekle(1,2,8);
    g.kose_ekle(1,7,11);
    g.kose_ekle(2,3,7);
    g.kose_ekle(2,8,2);
    g.kose_ekle(2,5,4);
    g.kose_ekle(3,4,9);
    g.kose_ekle(3,5,14);
    g.kose_ekle(4,5,10);
    g.kose_ekle(5,6,2);
    g.kose_ekle(6,7,1);
    g.kose_ekle(6,8,6);
    g.kose_ekle(7,8,7);

    cout<<"MST'nin köşeleri  \n";
    int mst_wt = g.kruskal_min_span_tree();
    cout<<" \nMST'nin agirligi: ' "<<mst_wt;
    







    scanf(" ");
    return 0;
}