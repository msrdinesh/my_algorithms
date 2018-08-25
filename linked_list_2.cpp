#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;
};

struct Node* head=NULL;
void Insert(int,int);
void print();
void Delete(int);

int main()
{
	Insert(1,1);//List:1
	Insert(2,2);//List:1 2
	Insert(3,3);//List:1 2 3
	Insert(4,4);//List:1 2 3 4 
	Insert(5,5);//List:1 2 3 4 5 
	Insert(0,3);//List:1 2 0 3 4 5
	Insert(1,1);
	print();
	cout<<endl;
	Delete(4);
	print();//printing the list
   
}

void Insert(int data,int n)
{
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	if(n==1)
	{
		temp1->next = head;
		head = temp1;
		return;
	}

	Node* temp2 = head;
	for(int i=0;i<n-2;i++)
	{
		temp2=temp2->next;

	}

	temp1->next = temp2->next;
	temp2->next = temp1;
}

void print()
{
	Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void Delete(int n)
{
	Node* temp1 = head;
	if(n==1)
	{
		head = temp1->next;
		delete temp1;

	}
	for(int i=0;i<n-2;i++)
	{
		temp1 = temp1->next;

	}

	temp1->next = (temp1->next)->next;
	delete temp1->next;
}