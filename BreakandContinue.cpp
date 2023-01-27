#include <iostream>
using namespace std;

int main(){
    /*int i=0;
    while(i<10){
        if(i==5){
            break;
        }
        cout<<"i :"<<i<<endl;
        i++;
    }
    */
   int i=0;

   while(i<10){
    
    if(i==3 || i==5){
        i++;
        continue;

    }
    cout<<"i :"<<i<<endl;
    i++;
   }


    scanf(" ");
    return 0;
}