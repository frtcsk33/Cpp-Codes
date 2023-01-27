#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{ //linked list olusturma
    public:
        int data;
        Node *link;


        Node(int n){ //constructor
            this->data=n;
            this->link=NULL;
        }
};

class Stack{
    Node *top;

    public: 
        Stack(){top=NULL;}

        void push(int data){
            Node *temp=new Node(data);

            if(!temp){
                cout<<"\nStack overFlow";
                exit(1);
            }

            temp->data=data;

            temp->link=top;

            top=temp;
        }
}




int main(){

    Stack s;

    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);

    s.display();




    scanf(" ");
    return 0;   

}