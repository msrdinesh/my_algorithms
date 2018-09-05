#include<iostream>
#include<string.h>
using namespace std;

#define d 256

void search(char pat[],char txt[],int q)
{
	cout<<"search is executing.."<<endl;
	int m = strlen(pat);
	int n = strlen(txt);
	int p =0; //hash value of pattern
	int t =0;//hash value of text
	int h =1;
	int flag =0;

	for(int i=0;i<m-1;i++)
	{
		h = (h*d)%q;
	}

	for(int i=0;i<m;i++)
	{
		p = (d*p + pat[i])%q;
		t = (d*t + txt[i])%q;
	}

	for(int i=0;i<=n-m;i++)
	{
		if(p==t)
		{
			int j;
			for(j=0;j<m;j++)
			{
				if(pat[j]!=txt[i+j])
				{
					break;
				}
			}

				if(j==m)
				{
					cout<<"index is found at value "<<i<<endl;
					flag =1;
				}
			}

			if(i<n-m)
			{
				t = (d*(t - txt[i]*h)+ txt[i+m])%q;
				if(t<0)
				{
					t = t+q;
				}
			}
		}


if(flag = 0)
{
	cout<<"pattern is not found"<<endl;
}

}





int main()
{
	char txt[] = "geeksforgeeks";
	char pat[] = "geek";
	search(pat,txt,11);
	return 0;

}

