#include<iostream>
using namespace std;

void counting_sort(int A[],int N)
{
	int k=0,i=0;
	for(i=0;i<N;i++)
	{
		k= max(k,A[i]);
	}
	int Aux[k+1];

	for(i=0;i<=k;i++) /*initalize the auxilary array with zeros*/
	{
		Aux[i]=0;
	}

	for(i=0;i<N;i++)
	{
		Aux[A[i]]++;
	}

	int j=0;
	for(i=0;i<=k;i++)
	{
		int temp = Aux[i];

		while(temp--)
		{
			A[j]=i;
			j++;
		}



	}
}

void printArray(int A[],int N)
{
	for(int i=0;i<N;i++)
	{
		cout<<A[i];
	}
}


int main()
{
	int A[6]={2,5,8,9,1,3};
    cout<<"given array:";
    printArray(A,6);

    cout<<endl;

    cout<<"sorted array:";
    counting_sort(A,6);
    printArray(A,6);
}
