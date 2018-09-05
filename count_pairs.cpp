#include<iostream>
#include<unordered_map>
using namespace std;

int count(int array[],int n,int sum)
{
	unordered_map<int,int> m;
	for(int i=0;i<n;i++)
	{
		m[array[i]]++;
	}

	int twice_count=0;

	for(int i=0;i<n;i++)
	{
		twice_count+=m[sum - m[array[i]]];

		if(sum-array[i]==array[i])
		{
			twice_count--;
		}
	}

	return twice_count/2;
}
int main()
{
	int array[] = {1,2,4,5,6,7,9,10};
	int output = count(array,8,6);
	cout<<output;
	return 0;
}