#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> v = {40,30,25,35,15};
	cout<<"printing the vector..."<<endl;
    vector<int>::iterator itr= v.begin();
    while(itr!=v.end())
    {
    	cout<<*itr<<endl;
    	itr++;
    }

	make_heap(v.begin(),v.end());
	cout<<"printing the vector after converting it into heap"<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	v.push_back(70);
	push_heap(v.begin(),v.end());
	cout<<"printing the vetor after pushing an element"<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	pop_heap(v.begin(),v.end());
	v.pop_back();

	cout<<"printing the vector after poping an element from the heap"<<endl;

	for(int i=0; i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	cout<<is_heap(v.begin(),v.end())<<endl;

}