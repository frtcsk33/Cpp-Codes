#ifndef HeaderStruct 
#define HeaderStruct
struct s{
    int boyut;
    int tepe;
    int *dizi;
};
typedef struct s stack;
stack * tanim();
// int *dizi=NULL;
// int boyut=2;
// int tepe=0;

int pop(stack *);
void push(int, stack *);
void bastir(stack *);


#endif