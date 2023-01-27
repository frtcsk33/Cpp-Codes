#include <bits/stdc++.h>

using namespace std;
//binary tree

class Node{
    public:
        int data;
        Node *left;
        Node *right;
        Node(int data=0){
            this->data=data;
            left=NULL;
            right=NULL;
        }
};

class BST{
    public:
        Node *root;
        BST(){
            root=NULL;
        }
        
        bool isEmpty(){
            return root==NULL;

        }
        Node *insert(Node *start, int data){
            if(start!=NULL){
                if(data<start->data)
                start->left=insert(start->left, data);

                else
                start->right=insert(start->right, data);

                
            }   
            else{
                return new Node(data);
            }
            return root;

        }

        void insert(int data){

            root=insert(root, data);
        }

};





int main()
{

    BST bst;
    
    

    bst.insert(10);
    bst.insert(5);
    bst.insert(30);
    
    cout<<bst.root->data<<endl;
    cout<<bst.root->left->data<<endl;
       cout<<bst.root->right->data<<endl;


    scanf(" ");
    return 0;
}