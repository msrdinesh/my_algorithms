#include<bits/stdc++.h>
using namespace std;
void add_edge(vector<int> adj[],int n,int m)
{
	adj[n].push_back(m);
	adj[m].push_back(n);
}

void print_graph(vector<int> adj[],int V)
{
	for(int i=0;i<V;i++)
	{
		cout<<"for index"<<i;
		for(auto x:adj[i]) //creating an iterable x which output the values of all the elements in the container adj[i]
		{
			cout<<"->"<<x;
		}
		cout<<endl;
	}

}

int main()
{
	int V =5;
	vector<int> adj[V];

	add_edge(adj,0,1);
	add_edge(adj,0,2);
	add_edge(adj,1,2);
	add_edge(adj,2,4);
	add_edge(adj,4,0);
	add_edge(adj,3,2);
	print_graph(adj,V);
}


