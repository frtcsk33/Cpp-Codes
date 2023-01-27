#include <iostream>
using namespace std;

//binary search tree Pre-in-Post Order

class Node{
    public:
        int data;
        Node * left;
        Node * right;

        Node(int data = 0){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};

class BST{
    public:
        Node *root;
        
        BST(){
            root = NULL;

        }
        bool isEmpty(){
            return root == NULL;
        }

        Node * insert(Node * start, int data){

            if(start != NULL)
            {
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
        void inOrder(Node *root){
            if(root!=NULL){
                inOrder(root->left);
                cout<<root->data<<" ";
                inOrder(root->right);
            }
        }
        void postOrder(Node *root)
        {
            if(root != NULL){
                postOrder(root->left);
                postOrder(root->right);
                cout<<root->data<<" ";
            }
           
        }

        int size(Node *root){
            if(root == NULL){
                return 0;
            }
            else{
                return size(root->left) + 1 + size(root->right);
            }
        }
        int height(Node * root){

            if(root == NULL){
                return 0;
            }
            else{
                int sag, sol;
                sol = height(root->left);
                sag = height(root->right);
                
                if( sol > sag )
                    return sol +1;
                
                else{
                    return sag+1;
                }
            }

        }

        int min(Node *root){

            Node * temp = root;
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

            Node * temp = root;
            if(root == NULL){
                return 0;
            }
            else{
                while(temp->right != NULL){
                    temp=temp->right;
                    
                }
                return temp->data;
            }
        }

        Node * search(Node * root, int data){

            if(root != NULL){
                
                if(root->data == data){
                    return root;

                }
                else if(data < root->data){
                    search(root->left, data);
                }
                else{
                    search(root->right, data);
                }
                
            }
            else{
                return NULL;
            }
        }


};


int main(){

   


      BST bst;

      cout<<bst.isEmpty()<<endl;

   
    
      bst.insert(10);
      bst.insert(20);
      bst.insert(5);
      bst.insert(30);
      bst.insert(40);
      bst.insert(15);
      bst.insert(3);
       bst.insert(50);


      cout<<"PreOrder Gezinme (once kok): "; bst.preOrder(bst.root);
       cout<<bst.root->left->left->data<<endl;
      cout<<endl;
      cout<<"INorder Gezinme (ortada kok): "; bst.inOrder(bst.root);

      cout<<endl;
      cout<<"Postorder Gezinme (sonda kok): "; bst.postOrder(bst.root);
      cout<<endl;
      cout<<"dugum sayisi: "<<bst.size(bst.root);

      cout<<endl;
      cout<<"yukseklik : "<<bst.height(bst.root);
    
      cout<<endl;
      cout<<"en kucuk  : "<<bst.min(bst.root);

      cout<<endl;
      cout<<"en buyuk  : "<<bst.max(bst.root);

      cout<<endl;
      cout<<"aranan sayi: (3) ? "; 
      if(bst.search(bst.root, 3) == NULL) 
          cout<<" yok"; 
      else 
          cout<<" var";

    scanf(" ");
    return 0;
}