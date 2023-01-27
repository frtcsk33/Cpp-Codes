#include <iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *left, *right;

        Node(int data = 0){
            this->data = data;
            left = NULL;
            right = NULL;

        }
};

class BST{
    public:

    Node * root;

    BST()
    {
        root = NULL;
    }
    
    Node * insert(Node * start, int data){

        if(start != NULL){

            if(data < start->data)
                start->left = insert(start->left, data);

            else
                start->right = insert(start->right, data);

        }
        else
        {
            return new Node(data);
        }
        return start;
    }

    void insert(int data){

        root = insert(root, data);
    }

    void preOrder(Node * root){

        if(root != NULL){
            cout<<root->data<<" ";
            preOrder(root->left);
            preOrder(root->right);

        }
    }

    void inOrder(Node * root){
        if(root != NULL){
            inOrder(root->left);
            cout<<root->data<<" ";
            inOrder(root->right);
        }
    }

    void postOrder(Node * root){
        if(root != NULL){
            postOrder(root->left);
            postOrder(root->right);
            cout<<root->data<<" ";
        }
    }

    int size(Node *root){
        Node * temp = root;

        if(root == NULL){
            return 0;
        }
        else{
            return size(root->left) + 1 + size(root->right);
        }
    }
    
    int height(Node *root){
        if(root == NULL){
            return 0;
        }
        else{
            int sag, sol;
            sol = height(root->left);
            sag = height(root->right);

            if(sol > sag){
                return sol +1 ;
            }
            else{
                return sag +1;
            }


        }

    }
    
    int min(Node *root){
        
        Node *temp = root;

        if(root == NULL){
            return 0;
        }
        else{
            while(temp->left != NULL){
                temp=temp->left;
            }
            return temp->data;
        }
    }

    int max(Node *root){
         Node *temp = root;

        if(root == NULL){
            return 0;
        }

        else{
            while(temp ->right != NULL){
                temp=temp->right;

            }
            return temp->data;
        }
    }

    Node * search(Node *root, int data){
        
        if(root != NULL){

            if(root->data == data)
                return root;

            else if(data < root->data){
                search(root->left, data);
            }
            else{
                search(root->right, data);
            }

        }   
        else
        {
            return NULL;
        }
        }

        Node * remove(Node * root, int x){
            if(root == NULL){
                cout<<"agac bos"<<endl;
                return NULL;
            }
            if(root->data == x)
            {
                
                if(root->left == root->right){
                    delete root;
                    cout<<x<<" silindi"<<endl;
                    return NULL;
                }
                else if(root->left == NULL){
                    Node *temp = root->right;

                    delete root;
                    cout<<x<<" silindi"<<endl;
                    return temp;
                }
                else if(root->right == NULL){
                    Node * temp = root->left;
                    delete root;

                    cout<<x<<" silindi";
                    return temp; 

                }
                else{

                    Node *q, *p;

                    p = q = root->right;

                    while(p->left != NULL){
                        p = p->left;
                    }
                    p->left = root->left;
                    cout<<x<<" silindi";

                    return q;
                }
            }
            

            else if(x < root->data){
                root->left = remove(root->left, x);
            }
            else{
                root->right = remove(root->right, x);

            }

            return root;

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
    // bst.insert(20);
    // bst.insert(5);
    // bst.insert(15);
    // bst.insert(35);
    // bst.insert(55);
    // bst.insert(3);

    // cout<<"preorder gezinme:  ";
    // cout<<endl;
    // bst.preOrder(bst.root);

    // cout<<endl;
    // cout<<"inorder gezinme: ";
    
    // bst.inOrder(bst.root);

    // cout<<endl;
    // cout<<"postorder gezinme:  ";
    
    // bst.postOrder(bst.root);


    //  cout<<"dugum sayisi: "<<bst.size(bst.root);


    //  cout<<endl;
    //   cout<<"yukseklik : "<<bst.height(bst.root);


    //    cout<<endl;
    //   cout<<"en kucuk  : "<<bst.min(bst.root);

    //     cout<<endl;
    //     cout<<"en buyuk:  "<<bst.max(bst.root);
    
    //   cout<<endl;
    //   cout<<"aranan sayi: (3) ? "; 
    //   if(bst.search(bst.root, 3) == NULL){
    //     cout<<" yok";

    //   }
    //   else
    //     cout<<"var";

    scanf(" ");
    return 0;
}