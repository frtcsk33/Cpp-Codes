#include <iostream>
using namespace std;

template <typename T>

T maksimum(T x, T y)
{
    return (x > y)? x : y;
}

// int maksimum(int x, int y);
// char maksimum(char x, char y);
// float maksimum(float x, float y);


int main(){


    cout<<maksimum(3,7)<<endl;
    cout<<maksimum(3.1, 4.2)<<endl;
    cout<<maksimum('a' , 'z');
    





    scanf(" ");
    return 0;
}