#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int>v(10);
	for(int i=0;i<v.size();i++)
	{
		v[i]=i*5;
	}

	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	cout<<v.empty()<<endl;

	v.push_back(67);

	cout<<"printing another vector"<<endl;
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<endl;
	}

	vector<int>v1(v);

	cout<<"printing new vector created"<<endl;

	for(int i=0;i<v.size();i++)
	{
		cout<<v1[i]<<endl;
	}

}