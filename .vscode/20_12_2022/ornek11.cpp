#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int dizi[]={100,200,300,400};
	vector<int>v(dizi, dizi+4);
	int i;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<endl;
	

	
	v.insert(v.begin()+1, 55); 
	
	for(i=0;i<v.size();i++)
		cout<<v[i]<<endl;
		

	return 0;
}
