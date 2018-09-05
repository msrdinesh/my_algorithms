#include<iostream>
#include<algorithm>
#include<memory.h>
#include<unordered_map>
using namespace std;

void convert(int array[],int n)
{
	int temp[n];
	memcpy(temp,array,n*sizeof(int));
	sort(temp,temp+n);
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[temp[i]]=i;
	}

	for(int i=0;i<n;i++)
	{
		array[i]=m[array[i]];
	}

}

int main()
{
	int array[] = {20,67,34,23,12,17,56,34};
	convert(array,8);

	for(int i=0;i<=7;i++)
	{
		cout<<array[i]<<" ";
	}
	cout<<endl;

	return 0;


}