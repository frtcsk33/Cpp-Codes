#include <iostream>

using namespace std;

class Test{
private:
    int a;

public:
    Test(int a){
        this->a=a;

    }
    void test(){
        cout<<"Test metodu";
    }
    int getValue(){ //const{ //Bu metod herhangi bir degeri degistiremez.
                          //const olmayan metodları çağıramaz
        return this->a;
    }
};

void test(const Test &test){
    cout<<test.getValue()<<endl;
}

int main(){

    Test test1(10);

    cout<<test1.getValue()<<endl;
 
    scanf(" ");
    return 0;
}