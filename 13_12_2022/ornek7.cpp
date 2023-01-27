#include <iostream>
using namespace std;
class saydir{
	private:
		int value;
	public:
		saydir():value(5){}
		~saydir(){}
		saydir operator++(){ //++value
			saydir gecici;
		//	cout<<"value="<<value;
			gecici.value=++value;	
			return gecici;	
		}
		saydir operator++(int){ //value++
			saydir gecici;
			//cout<<"value="<<value;
			gecici.value=value++;	
			return gecici;	
		}
		void display(){cout<<"value="<<value<<endl;
		}
};

int main()
{
	saydir s1,sonuc;
	sonuc=++s1;
	cout<<"sonuc=";sonuc.display();
	cout<<"s1=";s1.display();
	
	sonuc=s1++;
	cout<<"--------\nsonuc=";sonuc.display();
	cout<<"s1=";s1.display();
	
	scanf(" ");
}

