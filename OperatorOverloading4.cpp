#include <iostream>
using namespace std;

class saydir{

    private:
        int deger;

    public:
        saydir():deger(5){}
        ~saydir(){}

    void operator++(){
        // saydir gecici;
        // gecici.deger = ++deger;
        // cout<<"gecici deger: "<<gecici.deger<<endl;
        // cout<<"deger: "<<deger<<endl;
        ++deger;
    }
    void operator++(int){
        // saydir gecici;
        // gecici.deger = deger++;
        // cout<<"gecici deger: "<<gecici.deger<<endl;
        // cout<<"deger: "<<deger<<endl;
        deger++;
    }
    void display(){cout<<"deger: "<<deger<<endl;}

};


int main() {
	
    saydir s1;
    s1++;
    s1.display();
    
    ++s1;
    s1.display();

    scanf(" ");
	return 0;
}
