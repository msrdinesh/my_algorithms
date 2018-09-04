#include<iostream>
#include<set>
using namespace std;

int main()
{

	multiset<int> s;

	for(int i=0;i<10;i++)
	{
		s.insert(10-i);
	}

	multiset<int>:: iterator it;
	it = s.find(6);//does the search operation as like binary search tree.i.e a set in c++ is places the data in ascending order in the form of binary search tree
    s.erase(it);
    s.insert(11);
    s.insert(5);
	for(multiset<int>:: iterator it = s.begin();it!=s.end();it++)
	{
		cout<<*it<<endl;
	}

	return 0;

}