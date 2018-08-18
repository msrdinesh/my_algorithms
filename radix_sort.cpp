#include<iostream>
using namespace std;
void counting_sort(int A[],int N,int place)
{
     int i=0;
     int range=10;
     int output[N];
     int Aux[range]={0};
     for(i=0;i<N;i++)
     {
     	Aux[(A[i]/place)%range]++;

     }

     for(i=1;i<range;i++)
     {
     	Aux[i]+=Aux[i-1];
     }

     for(i=N-1;i>=0;i--)/*did not understan the step*/
     {
     	output[Aux[(A[i]/place)%range]-1] = A[i];
     	Aux[(A[i]/place)%range]--;
     }

     for(int i=0;i<N;i++)
     {
     	A[i]=output[i];
     } 


}

void radix_sort(int A[],int N,int digits)

{
	int mul =1;
	for(int i=digits;i>0;i--)
	{
		counting_sort(A,N,mul);
		mul = mul*10;
		
	}
}






int main()
{
	int A[8] = {10,21,17,34,44,11,654,123};

	cout<<"given array:";
	for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" ";
	}
	cout<<endl<<"sorted array";
	radix_sort(A,8,3);

	for(int i=0;i<8;i++)
	{
		cout<<A[i]<<" ";
	}
	return 0;
}