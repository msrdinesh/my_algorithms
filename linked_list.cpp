#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};
struct Node* head;
void Insert(int x);
void print();
int main()
{
	int n,x;
	cout<<"Number of elements in the linked list?"<<endl;
	cin>>n;
	head = NULL;//creating an empty list//
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number"<<endl;
		cin>>x;
		Insert(x);
		print();
	}
	return 0;
}

void Insert(int x)
{
	Node* temp = new Node();
	temp->data = x;
	temp->next = head;
	head = temp;
}
void print()
{
	Node* temp = head;
	cout<<"list:";
	while(temp!=NULL)
	{   cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;

}