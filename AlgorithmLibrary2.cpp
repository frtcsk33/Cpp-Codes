#include <iostream>
#include <algorithm>
using namespace std;
void metre_to_cm(double a){
    cout<<a*100<<endl;
}


int main()
{
    double metre[] = {3.5, 6.1, 1.0, 12.75, 4.33};

    //for_each(baslangic, bitis, fonksiyon)

    for_each(metre, metre+5, metre_to_cm);




    scanf(" ");
	return 0;
}
