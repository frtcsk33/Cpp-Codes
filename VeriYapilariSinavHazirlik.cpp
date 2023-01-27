//tree
#include "iostream"
using namespace std;

struct node{ //yonlendirme icin kullanilacak struct ifadeler
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){ //yeni dugum olusunca atanacak ifadeler
    struct node *yeni = new node;
    yeni->data = data;
    yeni->left = NULL;
    yeni->right = NULL;

    return yeni;
}

int main(){ //root olusturma ve data okuma\yazma
    //root
    struct node *root = newNode(1);

    root->left = newNode(2);
    root->right = newNode(3);

    root->left->left = newNode(4);
    root->left->right = newNode(5);

    root->right->left = newNode(6);
    root->right->right = newNode(7);

    cout<<root->data<<endl;
    cout<<root->left->data;
    cout<<root->right->data<<endl;

    /*
                                     1
                                   /   \
                                  2     3
                                 / \   / \
                                4   5  6  7
                        YAPISINI BU KOD ILE OLUSTURDUK
  */

    /*
  Inorder : L N R, R N L  --> Node ortada
  Preorder : N L R, N R L --> Node basta
  Postorder : L R N, R L N --> Node sonda
 */


/*                               BINARY TREE
                                    56
                               26          200
                           18      28   190    213
                       12    24   27

LNR = 12,18,24,26,27,28,56,190,200,213
 */
    scanf(" ");
    return 0;
}