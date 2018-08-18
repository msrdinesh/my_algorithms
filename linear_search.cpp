#include<iostream>
using namespace std;

void linear_search(int A[],int N)
{
	int flag=0;

	for(int i=0;i<7;i++)
	{
		if(A[i]==N)
		{
			
			flag++;

		}
	}
	if(flag==0)
	{
		cout<<"not found";
	}

	else
	{
		cout<<"the key is found "<<flag<<" times";
	}
}

int main()
{
int A[7]={2,4,1,4,7,9,1};
cout<<"given array:";
for(int i=0;i<7;i++)
{
	cout<<A[i];
}
cout<<endl;
int N;
cin>>N;
linear_search(A,N);
return 0;
}