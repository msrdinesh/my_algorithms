#include<iostream>
#include <algorithm>
using namespace std;

void merge(int A[],int start,int mid,int end)
{   int size = end-start+1;
	int p=start,q=mid+1,Arr[size],k=0;/*Arr is the duplicate array created to store the sorted array*/
	
    for(int j=0;j<size;j++)
{
	if(p>mid)/*checking whether the first half is done or not*/
	{
		Arr[k++]=A[q++];
		

	}
	else if(q>end)/*checking whether the second half is done or not*/
	{
		Arr[k++]=A[p++];
		
	}
	else if(A[p]<A[q])
	{
		Arr[k++]=A[p++];
			}
	else 
	{
		Arr[k++]=A[q++];
		
	}
}

	for(int i=0;i<k;i++)/*pasting all the values of Arr to the initial array A*/
	{
		A[start++]=Arr[i];

	}
}

void merge_sort(int A[],int start,int end)
{if(end>start)
	{
	int mid = (start+end)/2;
	merge_sort(A,start,mid);
	merge_sort(A,mid+1,end);
	merge(A,start,mid,end);
    }
}

void printArray(int A[],int size)
{
	
	for(int i=0;i<size;i++)
	{
		cout<<A[i];
	}
}

int main()
{
	int array [] = {2,5,3,7,1};

	cout<<"given array:";
	printArray(array,5);

    merge_sort(array,0,4);
    cout<<endl<<"sorted array:";
    printArray(array,5);

    

    return 0;
}