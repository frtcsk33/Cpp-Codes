#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
	int s1[]={3,5,8,9,10}, s2[]={11,22,33};
    int dest[8], i;

    //merge(baslangic_1, bitis_1, basla_2, bitis_2, hedef)

    merge(s1, s1+5, s2, s2+3, dest);
    
    for(i=0; i < 8; i++)
        cout<<dest[i]<<"\t";

    cout<<endl<<endl<<"---------------SORT ALGORITHM"<<endl;

    int d1[] = {11,15,33,1,55,66,77,58,99,10};
    int j;
    for(j = 0; j<9; j++){
        cout<<d1[j]<<" \t";

    }
    cout<<"\n";
    sort(d1, d1+9); //sort(baslangic, bitis)
    
    cout<<endl;
    for(j = 0; j<9; j++){
        cout<<d1[j]<<" \t";

    }

    



    scanf(" ");
	return 0;
}
