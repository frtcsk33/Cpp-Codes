#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{

    public:
        int data;
        Node* left;
        Node* right;
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
};



int main(){

    BTree bt;

    bt.root=new Node(10);

    bt.root->left=new Node(20);
    bt.root->right=new Node(30);
    bt.root->left->left=new Node(40);

    cout<<bt.root->data<<endl;
    cout<<bt.root->left->data<<endl;
    cout<<bt.root->right->data<<endl;
    cout<<bt.root->left->left->data<<endl;


    scanf(" ");
    return 0;
}