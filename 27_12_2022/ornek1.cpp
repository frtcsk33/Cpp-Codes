#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> d;
	int i;
	d.push_back(10); //d[0]
	d.push_back(20); //d[1]
	d[1]=18;
	for(i=0;i<d.size();i++)
		cout<<d[i]<<endl;
		
	d.pop_back();
	cout<<"--------"<<endl;
	for(i=0;i<d.size();i++)
		cout<<d[i]<<endl;
	cout<<"--------"<<endl;
	cout<<d.size()<<endl;
	return 0;
}
