#include <iostream>
//dizi ile yığın LIFO
//push,pop,peek
//son giren ilk çıkar mantığı
using namespace std;

class stack{
    private:
        int top;
    public:
        int a[1000];
        stack(){top=-1;}
        bool push(int data);
        int pop();
        int peek();
        int isEmpty();
};

bool stack::push(int data){
    if(top>=1000-1){
        cout<<"yiginda eleman tasmasi durumu!"<<endl;
        return false;
    }
    else
    {
        a[++top]=data;
        cout<<data<<"Eleman yigina eklendi: \n";
        return true;
    }
}

int stack::pop(){

    if(top<0){
        cout<<"yiginda eleman yok!";
        return 0;
    }
    else{
        int x=a[top--];
        return x;
    }    
}

int stack::peek(){
    if(top<0){
        cout<<"yigin bos"<<endl;
        return 0;
    }
    else
    {
        int x=a[top];
        return x;
    }
}

int stack::isEmpty(){

    return (top<0);
}





int main(){

    stack s;
    
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    cout<<s.pop()<<" eleman stackten cikarildi"<<endl;
    cout<<s.pop()<<" eleman stackten cikarildi"<<endl;

    cout<<s.peek()<<" En ustteki eleman"<<endl;

    cout<<"yigindaki elemanlar: "<<endl;

    while(!s.isEmpty()){
        cout<<s.peek()<<" ";
        s.pop();

    }





    scanf(" ");
    return 0;
}