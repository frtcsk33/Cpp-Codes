#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> v1;
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	int a=v1.back();
	int b=v1.front();
	cout<<"ilk eleman="<<b<<endl;
	cout<<"son eleman="<<a<<endl;
	
	const vector<int> v2=v1;
	cout<<"ilk eleman="<<v2.front()<<endl;
	cout<<"son eleman="<<v2.back()<<endl;
	
	
	

	scanf(" ");	
	return 0;
}
