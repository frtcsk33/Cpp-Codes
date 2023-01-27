#include <iostream>
using namespace std;

void Test(){
    static int i=3; //statik degiskenler
                    //bellekte bir defa olusur ve tekrardan
                    //olusmazlar ve bir degisken fonksiyon
                    //calistiktan sonra silinmez üzerinden
                    //devam eder.
    i++;
    cout<<"i nin degeri: "<<i<<endl;


}

int main(){
    Test();
    Test();
    Test();
    
    scanf(" ");
    return 0;
}