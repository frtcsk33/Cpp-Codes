#include <iostream>
//ikili arama ağacında preorder inorder postorder
using namespace std;

class Node{

    public:
        int data;
        Node *left, *right;

        Node(int data = 0){
            this->data = data;
            left = NULL;
            right= NULL;
        }
};

class BST
{

    public:
        Node *root;

        BST()
        {
            root = NULL;
        }

        Node * insert(Node *kok ,int data){

            if(kok != NULL)
            {

                if( data < kok->data)
                {
                    kok->left = insert(kok->left, data);

                }
                else
                {
                    kok->right = insert(kok->right, data);

                }
            }
            
            else
            {
                return new Node(data);
            }

            return kok;
        }

        void insert(int data)
        {
            root = insert(root, data);

        }

        void preOrder(Node *kok){
            //kok-->sol alt agac--->sag alt agac
            if(kok != NULL)
            {
                cout<<kok->data<<" ";
                preOrder(kok->left);
                preOrder(kok->right);

            }
        }

        void inOrder(Node * kok){
            //sol alt ağac--> kok--> sag alt agac
            if(kok != NULL){
                
                inOrder(kok->left);
                cout<<kok->data<<" ";
                inOrder(kok->right);

            }
        }

        void postOrder(Node * kok){

            if(kok != NULL){

                postOrder(kok->left);
                postOrder(kok->right);
                cout<<kok->data<<" ";
            }
        }



        Node * search(Node * kok, int data)
        {

            if(kok != NULL){

                if(kok->data == data)
                    return root;

                else if( data < kok->data){
                    search(kok->left, data);
                }
                else{
                    search(kok->right, data);
                }
            }
            else
                return NULL;
        }

        Node * remove(Node * root, int data)
        {
            if(root == NULL){
                cout<<"agac bos"<<endl;
                return NULL;
            }
            if(root->data == data)
            {

                if(root->left == root->right)
                {
                    delete root;
                    cout<<data<<" silindi"<<endl;
                    return NULL;
                }
                else if(root->left == NULL ){
                    Node * temp = root->right;

                    delete root;
                    cout<<data<<" silindi"<<endl;
                    return temp;
                }
                else if(root->right = NULL){

                    Node *temp = root->left;
                    delete root;

                    cout<<data<<" silindi"<<endl;
                    return temp;
                }

                else
                {
                    Node *q, *p;

                    p = q = root->right;

                    while(p->left != NULL)
                    {
                        p = p->left;
                    }
                    p->left = root->left;
                    cout<<data<<" silindi";

                    return q;
                }
            }
            else if(data < root->data){
                root->left = remove(root->left, data);
            }
            else{
                root->right = remove(root->right, data);
                
            }

            return root;


        }
        
        int min(Node * root){
            Node * temp = root;

            if(root == NULL){
                return 0;
            }
            else{
                while(temp->left != NULL){
                    temp = temp->left;
                }
                return temp->data;
            }

        }


        int max(Node * root){
            Node * temp = root;

            if(root == NULL){
                return 0;
            }
            else{
                while(temp->right != NULL){
                    temp = temp->right;

                }
                return temp->data;
            }

        }

};







int main(){


    BST bst;

    int sayi, secim;

    bst.insert(10);
    bst.insert(12);
    bst.insert(9);
    bst.insert(4);
    bst.insert(15);
    bst.insert(22);
    bst.insert(16);


    cout<<"-----PreOrder gezinme--"<<endl;
    bst.preOrder(bst.root);


    cout<<"-----inOrder gezinme--"<<endl;
    bst.inOrder(bst.root);

    cout<<"-----PostOrder gezinme--"<<endl;
    bst.postOrder(bst.root);
    cout<<"max ve min degerleri: "<<endl;


    cout<<bst.max(bst.root);
    cout<<" \t ";

    cout<<bst.min(bst.root);
    cout<<endl;


    bst.search(bst.root, 4);
    cout<<endl;

    bst.remove(bst.root, 16);
    cout<<endl;




    
    // while(1)
    // {
    //     cout<<"\n\n1-- ekle"<<endl;
    //     cout<<" 2-- sil"<<endl;
    //     cout<<" 3-- yazdir"<<endl;
    //     cout<<" 0-- cikis"<<endl;
    //     cout<<" 1-- ekle"<<endl;
    //     cout<<"4-- arama"<<endl;
    //     cout<<"seciminiz: "<<endl; cin>>secim;

    //     switch(secim){

    //     case 1: cout<<" sayi: "; cin>>sayi;
    //             bst.insert(sayi); break;
        
    //     case 2: cout<<"silinecek olan sayi: "; cin>>sayi;
                
    //             break;

    //     case 3: system("cls"); bst.preOrder(bst.root); 
    //             break;
            
    //     case 4: cout<<"aranacak olan sayi: "; cin>>sayi;
    //         bst.search(bst.root, sayi); break;

    //     case 0: cout<<"cikis yaptniz.. "<<endl;
    //         return 0;





    //     }

    





    scanf(" ");
    return 0;
}