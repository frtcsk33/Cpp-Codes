#include <iostream>
#include <vector>
using namespace std;


class sinif{

    private:
        int x;
    protected:
        int y;
    public:
        int z;

        sinif(){};
        sinif(int a, int b, int c)
        {this->x = a; this->y = b; this->z = c;}
        
        void deger_ata(int a, int b, int c)
        {
            this->x = a; this->y = b; this->z =c;

        }
        void goster()
        {
            cout<<"x = "<<x<<"   y = "<<y<<" \t z = "<<z<<endl; 
        } 
};



int main(){

    vector <sinif> cv(5);

    int i;
    for(i = 0; i < 5; i++)
        cv[i].deger_ata(i+1, (i+1)*(i+1), 2*i);
    
    for(i = 0; i<5; i++)
        cv[i].goster();


    for(i = 0; i< cv.size(); i++)
    {
        cv[i].goster();
    }



    scanf(" ");
    return 0;

}