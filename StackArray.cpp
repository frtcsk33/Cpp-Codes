#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

class Stack{
    int top;

    public:
        int a[1000]; //yığının max boyutu

        Stack()
        {
        top=-1;
        }
        bool push(int x);
        int pop();
        int peek();
        bool isEmpty();
};

bool Stack::push(int x){

    if(top>=1000-1){
        cout<<"Yigin doldu"<<endl;
        return false;
    }
    else{
        a[++top] = x;
        cout<<x<<"  Eleman yigina eklendi"<<endl;
        return true;
    }
}

int Stack::pop(){
    if(top==-1){
        cout<<"Yiginda cikarilabilecek bir eleman yok"<<endl;
        return -1;
    }
    else{
        int x = a[top--];
        return x;
    }
}

int Stack::peek(){
    if(top<0){
        cout<<"Yiginda eleman yok"<<endl;
        return -1;
    }
    else{
       int x=a[top];
       return x;
    }
}

bool Stack::isEmpty(){
    return (top<0);
}


int main(){

     Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<s.pop()<<"Eleman yigindan cikarildi"<<endl;

    cout<<"En ustteki eleman: "<<s.peek()<<endl;

    cout<<"Yigindaki tum elemanlar:  ";

    while(!s.isEmpty()){

        cout<<s.peek()<<" ";

        s.pop();
    }




    scanf(" ");
    return 0;
}