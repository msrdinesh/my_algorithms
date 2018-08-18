#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp = a;
	a=b;
	b=temp;
}

int partition(int A[],int start,int end)
{
	int i=start+1;
	int pivot = A[start];
	for(int j=start+1;j<=end;j++)
	{
		if(A[j]<pivot)
		{
			swap(A[i],A[j]);
			i+=1;
		}
	}

	swap(A[start],A[i-1]);
	return(i-1);
}

int rand_partition(int A[],int start,int end)
{
	int random = start + rand()%(end-start+1);
	swap(A[random],A[start]);
	return partition(A,start,end);
}
void quick_sort(int A[],int start,int end)
{
	if(start<end)
	{
		int pivot_pos = rand_partition(A,start,end);
		quick_sort(A,start,pivot_pos-1);
		quick_sort(A,pivot_pos,end);

	}
}
int main()
{
  int array [] = {2,5,3,7,1};
  
  for(int i=0;i<5;i++)
  {
  cout<<array[i];
    }

    quick_sort(array,0,4);

    for(int i=0;i<5;i++)
  {
  cout<<array[i];
    }
    
    }


