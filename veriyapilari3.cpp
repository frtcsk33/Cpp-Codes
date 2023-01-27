#include <iostream>
#include <bits/stdc++.h>
//dizi ile yığın oluşturma LIFO
class Stack
{
    int top;
    public:
        int a[1000];
        Stack(){top=-1;}
        bool push (int x);
        int pop();
        int peek();
        int isEmpty();

};
bool Stack::push(int x){
    if(top>=1000-1){
        std::cout<<"Stack overflow"<<std::endl;
        return false;

    }
    else{
        a[++top]=x;
        std::cout<<x<<" Yigina Eklendi:\n";
        return true;
    }
}

int Stack::pop()
{
    if(top<0){
        std::cout<<"yigin boş";
        return 0;
    }    
    else
    {
        int x=a[top--];
        return x;
    }
}

int Stack::isEmpty(){

    return (top<0);

}

int Stack::peek(){

    if(top<0){
        std::cout<<"yigin boş";
        return 0;
    }    
    else{
        int x=a[top];
        return x;

    }

}




int main(){

    class Stack s;
    s.push(20);
    s.push(28);
    s.push(32);

    std::cout<<"En ustte bulunan eleman: "<<s.peek()<<std::endl<<std::endl;
    
    std::cout<<s.pop()<<" Elemani yigindan atildi\n";
    std::cout<<"Yigindan bulunan elemanlar sunlardir:  \n";
    while (!s.isEmpty())
    {
        std::cout<<s.peek()<<" ";
        s.pop();

    }
    


    scanf(" ");
    return 0;
}