#include <iostream>
#include <list>
using namespace std;
int main()
{
	list<int>l1, l2;
	
	int arr1[]={10,20,30,40};
	int arr2[]={15,20,35,40,55};
	int i;
	
	for(i=0;i<4;i++)
		l1.push_back(arr1[i]);
		
	for(i=0;i<5;i++)
		l2.push_back(arr2[i]);
		
	l1.reverse();
	l1.merge(l2);
	l1.sort();
	l1.unique();
	cout<<"------l1-------" <<endl;
	/*while(!l1.empty())
	{
		cout<<l1.front()<<endl;
		l1.pop_front();
		}		
		*/
	list <int>::iterator itr;	
	int x=1;
	for(itr=l1.begin();itr!=l1.end();itr++)	
		*itr=x++ * x++;
	
	for(itr=l1.begin();itr!=l1.end();itr++)	
		cout<<*itr<<"\t";
		
		
		/*
cout<<"------l2-------" <<endl;
	for(i=0;i<5;i++)
	{
		cout<<l2.front()<<endl;
		l2.pop_front();
		}		*/

		return 0;
}
