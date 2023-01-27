#include <iostream>

using namespace std;

class Complex{
    private:
        float real;
        float imag;

    public:
        Complex():real(0), imag(0){}

        void input(){
            cout<<"enter real and the imaginary parts";
            cin>>real;
            cin>>imag;

        }
        Complex operator + (const Complex &obj){
            Complex temp;
            temp.real = real + obj.real;
            temp.imag = imag + obj.imag;
            return temp;

        }
        void output(){
            if(imag < 0)
                cout<<"output complex number: "<<real<<imag<<"i";
            else
                cout<<"output complex number: "<<real<<"+"<<imag<<"i";
        }



};



int main(){

    Complex c1, c2, c3;
    
    cout<<"Enter the first complex number: \n";
    c1.input();

    cout<<"Enter the second complex number: \n";
    c2.input();

    c3 = c1 + c2;
    c3.output();




    

    scanf(" ");
    return 0;
}

