#include <iostream>
#include <vector>
using namespace std;
int main()
{
	//vector <tipi>degisken_adi;
	vector <int> d;
	cout<<d.size()<<endl;
	d.push_back(5);
	cout<<d.size()<<endl;
	cout<<d[0]<<endl;
	// 5 15
	d.push_back(15);
	cout<<d[1]<<endl;
	
	d[1]=3;
	
	int i;
	for(i=0;i<d.size();i++)
		cout<<d[i]<<endl;
	
	vector <int> v1(10);
	
	v1.push_back(15);
	for(i=0;i<v1.size();i++)
		cout<<v1[i]<<"\t";
		
	
	cout<<endl;
	
	vector <int> v2(5, -1);
	v2.push_back(55);
	for(i=0;i<v2.size();i++)
		cout<<v2[i]<<"\t";
		
	cout<<endl;
	
	vector <int> v3;
	v3.assign(5,23);
	for(i=0;i<v3.size();i++)
		cout<<v3[i]<<"\t";
	
	
	return 0;
}
