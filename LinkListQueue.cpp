#include <iostream>

using namespace std;

class n{
    public:
        int data;
        n * next;

};
typedef n node;

node *root=NULL;
node *son=NULL;

void enque(int data){
    if(root==NULL){
        root = new node();
        root->data=data;
        root->next=NULL;
        son=root;
    }
    else{
        son->next= new node();
        son->next->data=data;
        son=son->next;
        son->next=NULL;
    }
}

int deque(){
    if(root==NULL){
        cout<<"Sirada Eleman yok";
        return -1;
    }
    int value=root->data;
    node *temp=root;
    root=root->next;
    free(temp);
    return value;
}





int main(){

    for(int i=0; i<10; i++){
        enque(i*10);
    }
    for(int i=0; i<11; i++){
        cout<<" "<<deque();
    }






    scanf(" ");
    return 0;
}