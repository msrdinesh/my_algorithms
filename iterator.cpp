#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

int main()
{
	vector <int> v;
	for(int i=0;i<10;i++)
	{
		v.push_back(rand()%100);
	}

	for(vector<int>::iterator it = v.begin();it!= v.end();it++)
	{
		cout<<(*it)<<endl;
	}

	set<int> s;

	cout<<"printing the set...."<<endl;

	copy(v.begin(),v.end(),inserter(s,s.begin()));

	for(set<int>::iterator itr = s.begin();itr!=s.end();itr++)
	{
		cout<<(*itr)<<endl;
	}

	



	return 0;
}