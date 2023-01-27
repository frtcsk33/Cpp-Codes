#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;



int main(){

   int s1[] = {3,5,6,1};
   int s2[] = {5,6,1};

   //search(baslangic1, bitis 1, basla_2, bitis_2)

   int *ptr = search(s1, s1+4, s2 , s2+3);
   cout<<"s1: "<<s1<<endl;
   cout<<"ptr: "<<ptr<<endl;
    int i=0;
   if(ptr==s1+4)
		cout<<"bulunamad�";
	else
		cout<<"bulundu";

    scanf(" ");
    return 0;
}