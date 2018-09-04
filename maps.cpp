#include<iostream>
#include<map>
using namespace std;

int main()
{
	pair<char,int> x;
	map<char,int> m;

	for(char ch = 'a'; ch!='z';ch++)
	{
		x.first = ch;
		x.second = (int)ch;
		m.insert(x);
	}

	map<char,int>:: iterator it ;

	for(it = m.begin();it!=m.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}

	cout<<"finding the ascii value of x"<<endl;

	it = m.find('x');

	cout<<it->second<<endl;
	return 0;

}