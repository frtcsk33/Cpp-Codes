#include <iostream>
#include <vector>

using namespace std;

int main(){

    double dizi[] = {1.1, 2.2, 3.3, 4.4 };
    vector <double> v1(dizi, dizi+4);
    vector <double> v2(2);
    vector <double> v3(2, 1.1);

    int i;
    cout<<"____v1___"<<endl;
        for(i= 0; i<v1.size(); i++){
            cout<<v1[i]<<endl;
        }    
    
    cout<<"____v2___"<<endl;
        for(i= 0; i<v2.size(); i++){
            cout<<v2[i]<<endl;
        }    
    cout<<"____v3___"<<endl;
        for(i= 0; i<v3.size(); i++){
            cout<<v3[i]<<endl;
        }    

    cout<<endl<<endl<<"-------SWAP--------"<<endl;
    v1.swap(v2);
    cout<<"____v1___"<<endl;
        for(i= 0; i<v1.size(); i++){
            cout<<v1[i]<<endl;
        }     
    cout<<"____v2___"<<endl;
        for(i= 0; i<v2.size(); i++){
            cout<<v2[i]<<endl;
        }    

    cout<<"________v2_____"<<endl;
    while(!v2.empty()){
        cout<<v2.back()<<endl;
        v2.pop_back();
    }
    cout<<"____v2___"<<endl;
        for(i= 0; i<v2.size(); i++){
            cout<<v2[i]<<endl;
        }    


    scanf(" ");
    return 0;
}