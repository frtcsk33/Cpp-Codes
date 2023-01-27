#include <iostream>

using namespace std;

class final;
class vize{
    int puan;

    public:
        vize(int p){puan = p;}
        ~vize(){}
        friend float ort(vize k, final l);

};


class final{
    private:
        int puan;
    public:
        final(int f){puan = f;}
        ~final(){}
        friend float ort(vize k, final l);
};

float ort(vize k, final l){
    return k.puan*0.4 + l.puan*0.6;
}

int main(){

    vize k1(35);
    final l1(55);

    cout<<"Not ortalamasi: "<<ort(k1,l1);








    scanf(" ");
    return 0;
}