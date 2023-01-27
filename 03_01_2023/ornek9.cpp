#include <iostream>
using namespace std;
template<class T, const int mak=100>
class stack{
	private:
		T dizi[mak];
		int top;
	public:
		stack(){top = -1;}
		void push(T a){dizi[++top]=a;}
		T pop(){return dizi[top--];	}
		void goster(){
			for(int i=0;i<=top;i++)
				cout<<dizi[i]<<endl;
		}
};

int main()
{
	stack<float> s1;
	cout<<"....s1......"<<endl;
	s1.push(1.1f);
	s1.push(2.2f);
	s1.goster();
	cout<<s1.pop()<<endl;
	cout<<s1.pop()<<endl;
	
	
	cout<<"....s2......"<<endl;
	stack<char> s2;
	s2.push('a');s2.push('c');s2.push('f');s2.push('k');
	s2.goster();
	cout<<s2.pop()<<endl;
	
	
	cout<<"....s3......"<<endl;
	stack<int>s3;
	s3.push(5);s3.push(6);
	s3.goster();
	cout<<s3.pop()<<endl;
	
	
	
	cout<<"....s4......"<<endl;
	stack<string> s4;
	s4.push("ocak");
	s4.push("subat");
	s4.goster();

	scanf(" ");
	return 0;	
}

