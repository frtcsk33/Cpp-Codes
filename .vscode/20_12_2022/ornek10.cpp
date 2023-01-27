#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int>d;
	d.push_back(5);
	d.push_back(22);
	d.push_back(55);
	
	cout<<d.back()<<endl;
	
	cout<<d.front()<<endl;
	
	
	int i;
	d[2]=13;
	for(i=0;i<d.size();i++)
		cout<<d[i]<<"\t";
	cout<<endl;
	d.pop_back();
	for(i=0;i<d.size();i++)
		cout<<d[i]<<"\t";
	d.pop_back();
	d.pop_back();

	cout<<"\n"<<d.size()<<endl;

	cout<<endl;
	
	return 0;	
}
