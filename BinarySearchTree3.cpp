#include <iostream>
using namespace std;

//binary search tree silme

class Node{
    
    public:
        int data;
        Node * left;
        Node * right;

        Node (int data = 0){
            this->data = data;
            left =NULL;
            right = NULL;
        }

};


class BST{

    public:
    Node * root;

    BST(){
        root = NULL;
    }

    Node * insert(Node * start, int x){
        if(start != NULL){
            if( x < start->data )
                start->left = insert(start->left, x);
            else
                start->right = insert(start->right, x);
        }
        else{
            return new Node(x);
        }
        return start;
    }    

    void insert(int data){
        root = insert(root, data);
    }
    
    void preOrder(Node * root){
        if(root != NULL){
            cout<<root->data<<  " ";
            preOrder(root->left);
            preOrder(root->right);
        }    
        }
    
    Node * remove(Node * start, int x){

        if(start == NULL){
            cout<<"agac bos"<<endl;
            return NULL;
        }

        if(start->data == x)
        {
            if(start->left == start->right)
            {
                delete start;
                cout<<x<< " silindi"<<endl;
                return NULL;
            }    
            else if( start->left == NULL){
                Node * temp = start->right;
                
                delete start;
                cout<<x<< " silindi"<<endl;
                return temp;
            }
            else if( start->right == NULL){
                Node * temp = start->left;
                delete start;
                  cout<<x<< " silindi"<<endl;
                return temp;
            }
            else
            {
                Node * p, * q;

                p = q = start->right;

                while(p->left != NULL)
                    p=p->left;

                    p->left = start->left;
                    cout<<x<< " silindi"<<endl;

                    return q;
                

            }

        }

        else if(x < start->data){
            start->left = remove(start->left, x);
        }
        else{
            start->right = remove(start->right, x);
        }
            

        return start;


    }
};


int main(){

    BST bst;

    int sayi;
    int secim;
    while(1){

        cout<<"\n\n1-- ekle"<<endl;
        cout<<"2-- sil"<<endl;
        cout<<"3-- yazdir"<<endl;
        cout<<"0-- cikis"<<endl;
        cout<<"seciminiz: "<<endl; cin>>secim;
        switch(secim){
            case 1: cout<<"sayi: "; cin>>sayi;
            bst.insert(sayi); break;

            case 2: cout<<"silinecek olan sayi: "; cin>>sayi;
            bst.root = bst.remove(bst.root, sayi);    break;

            case 3: system("cls");
                bst.preOrder(bst.root);
                break;

            case 0:  cout<<"cikis yaptiniz..."<<endl;
                return 0;
        }
    }

    // BST bst;

    // bst.insert(10);
    // bst.insert(5);
    // bst.insert(20);
    // bst.insert(15);
    // bst.insert(4);
    // bst.insert(8);
    // bst.insert(30);

    // bst.preOrder(bst.root);

    // bst.root = bst.remove(bst.root, 10);
    // bst.root = bst.remove(bst.root, 20);
    // bst.root = bst.remove(bst.root, 4);


    // cout<<" \nsilme isleminden sonra "<<endl;
    // bst.preOrder(bst.root);










    scanf(" ");
    return 0;
}