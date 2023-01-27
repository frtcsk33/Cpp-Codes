#ifndef StackBagliListe
#define StackBagliListe

struct n{
    struct n * next;
    int data;
};
typedef n node;
int pop(node *);
node * push(node *, int);
void bastir();
#endif
