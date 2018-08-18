#include<iostream>
using namespace std;
int ternary_search(int A[],int l,int r,int x)
{
	if(l<=r)
	{
		int mid1 = l+((r-l)/3);
		int mid2 = r-((r-l)/3);
		if(A[mid1]==x)
		{

			return mid1;

		}

		if(A[mid2]==x)
		{
			return mid2;
		}

		if(x<A[mid1])
		{   
			return ternary_search(A,l,mid1-1,x);
		}

		else if (x<A[mid2])
		{
			return ternary_search(A,mid1+1,mid2-1,x);
		}
		else 
		{
			return ternary_search(A,mid2+1,r,x);
		}
	}
	return -1;
}

int main()
{
	int A[8]={12,35,47,89,100,125,195,200};
	cout<<"given array: ";
	for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" ";
	}
	int key;
	cout<<"give the value of key ";
	cin>>key;
	int index;
	 index = ternary_search(A,0,7,key);
	 cout<<"the index is :"<<index;
	 return 0;
}