#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;
int top;
/*useful api's to know about stack datastructure are push,isEmpty(),pop(),*/
void check(char str[],int n,char stack[])
{
	
	for(int i=0;i<n;i++)
	{

		if(str[i]=='(')
		{
			top = top +1;
			stack[top]='(';
		}

		if(str[i]==')')
		{
			if(top==-1)
			{
				top = top-1;
				break;
			}

			else
			{
				top = top-1;
			}
		}

	}
	if(top==-1)
	{
		cout<<"The string is balanced"<<endl;
	}

	else
	{
		cout<<"The string is not balanced"<<endl;
	}
}


int main()
{

char stack[15];
char str[6]={'(','c','a','b','c',')'};
top=-1;
check(str,6,stack);
return 0;

}