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
void reverse();
void Print(struct Node*);//This is printing using recursion
void Reverse_Print(struct Node*);
void Reverse(struct Node*);
void print();

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
	cout<<endl;
    reverse();
    print();
    cout<<endl;
    Print(head);//print the list usig recursion
    cout<<endl;
    Reverse_Print(head);
    cout<<endl;
    Reverse(head);
    print();
    cout<<endl;


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

void reverse()
{
	struct Node *current,*prev,*next;
	prev = NULL;
	current = head;
	while(current!=NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
}

void Print(struct Node *p)
{
	if(p==NULL)
	{
		return;
	}
	cout<<p->data<<" ";
	Print(p->next);
}

void Reverse_Print(struct Node* p)
{
	if(p==NULL)
	{
		
		return;
	}
	Reverse_Print(p->next);
	cout<<(p->data)<<" ";
}

void Reverse(struct Node* p)
{
	if(p->next==NULL)
	{
		head = p;
		return;
	}
    Reverse(p->next);
    struct Node* q = p->next;
    q->next = p;
    p->next = NULL;
}