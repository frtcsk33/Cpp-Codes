#include <iostream>

using namespace std;

class a{
    public:
        int x=1;
        a(){cout<<" aa "<<endl;}
        ~a(){}
        int get_z(){return z;}
    
    protected:  
        int y=2;

    private:
        int z = 3;

};
     
class b: public a{
    public:
        b(){cout<<"  bb  "<<endl;}
        ~b(){}
        int get_x(){return x;}
        int get_y(){return y;}
    
    protected:  
        int m = 4;
        int hesapla(){return x*y*get_z()*m;}

};

class c: public b{
    public:
        void goster(){cout<<hesapla()<<endl;}
};

//nesneler sadece public olan elemanlara/fonksiyonlara/metodlara ulaşabilir


int main(){

   c c1;

    cout<<c1.get_x()<<endl;
    cout<<c1.get_y()<<endl;
    cout<<c1.get_z()<<endl;

    c1.goster();
    //cout<<c1.x<<endl;
   



    scanf(" ");
    return 0;
}