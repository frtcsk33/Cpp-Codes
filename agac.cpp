#include <iostream>

using namespace std;

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node *newNode(int data){
    struct node *yeni = new node;
    yeni->data = data;
    yeni->left = NULL;
    yeni->right = NULL;

    return yeni;
}

int main(){


    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left =  newNode(6);
    root->right->right = newNode(7);

    cout<<root->data<<endl;
    cout<<root->left->data<<endl;
    cout<<root->right->data<<endl;







    scanf(" ");
    return 0;
}