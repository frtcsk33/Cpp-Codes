#include <iostream>
#include <bits/stdc++.h>
using namespace std;


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

class BTree{
    public:
        Node *root;

        BTree(){
            root=NULL;
            
        }
        bool isEmpty(){
            return root==NULL;
        }

        Node *insert(Node *root, int data){
            if(root!=NULL){
                if(data < root->data){
                    root->left=insert(root->left, data);
                }
                else{
                    root->right=insert(root->right, data);
                }
            }
            else{
                return new Node(data);
            }
            return root;
        }
        
        void insert(int data){
            root=insert(root,data);
        }

};





int main(){


    BTree s;

    s.insert(10);
    s.insert(5);
    s.insert(30);

    cout<<s.root->data<<endl;
    cout<<s.root->left->data<<endl;
    cout<<s.root->right->data<<endl;
    

    scanf(" ");
    return 0;
}