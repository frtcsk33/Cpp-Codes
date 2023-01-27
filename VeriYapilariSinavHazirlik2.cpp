//siralama algoritmalari
#include "iostream"
using namespace std;

/* SELECTION SORT (en küçük sayiyi bulup en bastaki ile yer degistiriyor)
        [4,1,2,3] -> [1,4,2,3] -> [1,2,4,3] -> [1,2,3,4]
*/

int main(){
    int array[4] = {4,3,2,1};
    for(int a=0; a<4; a++)cout<<array[a]<<endl;
    int min,temp;

    //ANA KOD BAS
    for(int i=0; i<4; i++){
       min = i;
       for(int j=i+1;j<4;j++){
           if(array[j]<array[min])
               min = j;
       }
       if(min!=i){
           temp = array[i];
           array[i] = array[min];
           array[min] = temp;
       }
       cout<<array[i];}
    //ANA KOD SON


    return 0;
}

