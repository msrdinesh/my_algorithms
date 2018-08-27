#include<iostream>
using namespace std;
struct Node 
{
	int data;
	struct Node* next;
	struct Node* prev;
};

struct Node* getNewNode(int);
void InsertAtHead(int);
void Print();
void ReversePrint();
void InsertAtEnd(int);

struct Node* head=NULL;

int main()
{
	InsertAtHead(1);
	Print();
	InsertAtHead(3);
	Print();
	InsertAtHead(5);
	Print();
	InsertAtEnd(6);
	Print();
	ReversePrint();
	return 0;
}

struct Node* getNewNode(int x)
{
	struct Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}

void InsertAtHead(int x)
{
	struct Node* newNode = getNewNode(x);
	if(head==NULL)
	{
		head = newNode;
		return;
	}

	head->prev = newNode;
	newNode->next = head;
	head = newNode;
}

void Print()
{
	cout<<"list:";
	struct Node* temp = head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp = temp->next;
	}
	cout<<endl;
}

void ReversePrint()
{
	cout<<"list:";
	struct Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	} 


	while(temp!=NULL)
	{
		cout<<temp->data;
		temp = temp->prev;
	}
	cout<<endl;
}


void InsertAtEnd(int x)
{
	struct Node* newNode = getNewNode(x);
	struct Node* temp = head;
	while(temp->next!=NULL)
	{
		temp = temp->next;
	}

	temp->next = newNode;
	newNode->prev = temp;
}