#include <iostream>

using namespace std;

template <class T, const int mak = 100>

class Stack{
    private:
        int top;
        T dizi[mak];

    public:
        Stack(){top = -1;}

        void push(T a){
            dizi[++top] = a;
        }
        T pop()
        {
            return dizi[top--];
        }
             
        

        void goster(){
            for(int i=0 ; i <= top; i++){

                cout<<dizi[i]<<endl;
            }
        }


};




int main(){


    Stack <float> s1;

    s1.push(1.1);
    s1.push(2.2);
    s1.push(3.3);
    s1.goster();

    cout<<s1.pop()<<endl;
    cout<<s1.pop()<<endl;

    cout<<endl;
      s1.goster();

    scanf(" ");
    return 0;
}