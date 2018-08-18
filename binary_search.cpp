#include<iostream>
using namespace std;

int binary_search(int A[],int N,int key)
{
	int low=0;
	int high=N;
	while(low<=high)
	{
		int mid = (high+low)/2;
		if(A[mid]>key)
		{
			low = mid+1;
		}
		else if(A[mid]>key)
		{
			high = mid;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}

int main()
{
	int A[8]={1,2,3,4,5,6,7,8};
	int key;
	cin>>key;
	int index = binary_search(A,8,key);
	cout<<index;
    return 0;
}