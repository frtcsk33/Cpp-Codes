#include <iostream>
using namespace std;

class Node{
    private:
        int data;
    public:
        Node *next;
        Node *prev;
    Node(int data=0){
        this->data=data;
        next=NULL;
        prev=NULL;
    }   

    void setData(int data){
        this->data=data;
    
    }
    int getData(){
        return data;
    }


};

class List{
    public:
        Node *root;
        Node *tail;
    List(){
        root=NULL;
        tail=NULL;

    }

    bool isEmpty(){
        return root==NULL;
    }

    void push_front(int value){
        if(isEmpty()){
            root=new Node(value);
            tail=root;
        }
        else
        {
            Node *temp=new Node(value);
            temp->next=root;
            root->prev=temp;
            root=temp;
        }
    }
    void push_back(int value){
        if(isEmpty()){
            root=new Node(value);
            tail=root;
        }
        else{
             //tail->next=new Node(value);
             //tail->next->prev=tail;
             //tail=tail->next;
            
            Node *temp=new Node(value);
             tail->next=temp;
             temp->prev=tail;
             tail=temp;
        }
    }
    
    void print()
    {
        system("cls");
        if(isEmpty()){
            cout<<"liste bos"<<endl;

        }
        else{
            Node* temp=root;
            cout<<"bas -> ";
            while(temp!=NULL){
                cout<<temp->getData()<<" --> ";
                temp=temp->next;

            }
            cout<<"son. "<<endl;
        }
    }

    void reverse()
    {
        system("cls");
        if(isEmpty()){
            cout<<"liste bos"<<endl;

        }
        else{
            Node* temp=tail;
            cout<<"son -> ";
            while(temp!=NULL){
                cout<<temp->getData()<<" --> ";
                temp=temp->prev;

            }
            cout<<"bas. "<<endl;
        }
    }

    void pop_front(){
        if(isEmpty()){
            cout<<"liste bos";
        }
        else{
            if(root->next==NULL){
                delete root;
                root=NULL;
                tail==NULL;
            }
            else{
                Node *temp =root;
                root=root->next;
                delete temp;
                root->prev=NULL;
            }
            
        }
    }

    void pop_back(){
          if(isEmpty()){
            cout<<"liste bos";
        }
        else{
             if(root->next==NULL){
                delete root;
                root=NULL;
                tail==NULL;
             }
             else{
                Node *temp=tail;
                tail=tail->prev;
                delete temp;
                tail->next=NULL;
             }
           
        }
    }
void clear(){
        if(isEmpty())
            cout<<"liste bos";
    
    else{
        Node *temp=root;
        while(root!=NULL){

            temp=root;
            root=root->next;
            delete temp;
        }
        root=NULL;
        tail=NULL;
        cout<<"liste temizlendi"<<endl;
    }
}


int main()
{

    int secim;
    int data;
    List list;
    while(1){
            cout<<"1-- basa ekleme"<<endl;
            cout<<"2-- sona ekleme"<<endl;
            cout<<"3-- bastan sil"<<endl;
            cout<<"4-- sondan sil"<<endl;
            cout<<"5-- tersten yazdir"<<endl;
            cout<<"6-- resetle"<<endl;
            cout<<"7-- sirala"<<endl;
            cout<<"0-- cikis"<<endl;
            cout<<"seciminiz: "<<endl;
            cin>>secim;

            switch(secim){

                case 1: cout<<"sayi :"; cin>>data; list.push_front(data);
                    list.print(); break;
                case 2: cout<<"sayi :"; cin>>data; list.push_back(data);
                    list.print(); break;
                case 3: list.pop_front();  list.print(); break;

                case 4: list.pop_back();  list.print(); break;

                case 5: list.reverse(); break;
                case 6: list.clear(); break;
            }


    }





    
    scanf(" ");
    return 0;
}