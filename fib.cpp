#include<iostream>
using namespace std;
int fib(int x)
{
	if(x==1 or x==0)
	{
		return 1;
	}

	else
	{
		return fib(x-1)+fib(x-2);
	}
}

int fib_bottom_up(int x)
{
	int* bottom_up = new int[x];
	bottom_up[1]=1;
	bottom_up[0]=1;
	for(int i=2;i<=x;i++)
	{
		bottom_up[i] = bottom_up[i-1]+bottom_up[i-2];
	}

	return bottom_up[x];

}

int main()
{
	cout<<"give the value of n"<<endl;
	int n;
	cin>>n;
	int output = fib_bottom_up(n);
	cout<<output<<endl;
	return 0;
}