#include <bits/stdc++.h>

using namespace std;

//binary tree

class ikili_agac
{
    public:
        int veri;
        ikili_agac* sol;
        ikili_agac* sag;
        ikili_agac(int eklenecek)
        {
            veri=eklenecek;
            sol=NULL;
            sag=NULL;

        }
};



int main(){


    ikili_agac* kok=new ikili_agac(1);
    kok->sag=new ikili_agac(2);
    kok->sol=new ikili_agac(3);
    kok->sag->sol=new ikili_agac(4);
    kok->sag->sol->sag=new ikili_agac(5);
    kok->sol->sol=new ikili_agac(6);







    scanf(" ");
    return 0;
}