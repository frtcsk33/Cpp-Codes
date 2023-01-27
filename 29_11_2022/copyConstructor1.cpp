#include <iostream>
using namespace std;

class Sample{

    int id;
    public:
        void init(int x)
        {
            id = x;
        }

        Sample(){}

        Sample(Sample &t)
        {
            id = t.id;
        }

        void display(){
            cout<<endl<<"ID = "<<id;

        }
};
int main()
{
    Sample s1;

    s1.init(10);
    s1.display();

    Sample s2(s1); // copy constructor veya s2 = s1; yapılabilir
    s2.display();

	scanf(" ");
	return 0;
}
