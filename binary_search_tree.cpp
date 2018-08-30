#include<iostream>
#include<queue>
using namespace std;
struct bstNode
{
	int data;
	bstNode* left;
	bstNode* right;

};
bstNode* Insert(bstNode*,int);
bstNode* getNewNode(int);
bool Search(bstNode*,int);
int findHeight(bstNode*);
void levelOrder(bstNode*);
void preOrder(bstNode*);
void inOrder(bstNode*);
void postOrder(bstNode*);
int main()
{
	bstNode* root = NULL;
	root = Insert(root,5);
	root = Insert(root,4);
	root = Insert(root,7);
	root = Insert(root,16);
	root = Insert(root,14);
	root = Insert(root,17);
	root = Insert(root,12);

    cout<<"give the number to be searched"<<endl;
    int number;
    cin>>number;
    if(Search(root,number)==true)
    {
    	cout<<"the number is there"<<endl;
    }

    else
    {
    	cout<<"number is not there"<<endl;
    }

    cout<<"The height is: "<<findHeight(root)<<endl;
    cout<<"Traversing the tree in level order..."<<endl;
    levelOrder(root);
    cout<<endl;
    cout<<"Traversing the tree in in order"<<endl;
    inOrder(root);


    return 0;
}

  bstNode* getNewNode(int data)
  {
  	bstNode* newNode = new bstNode();
    newNode->data = data;
    newNode->left = newNode->right = NULL;
  }

  bstNode* Insert(bstNode* root,int data)
  {
  	if(root==NULL)
  	{
  		root = getNewNode(data);
  	}

  	else if(data>=root->data)
  	{
  		root->right = Insert(root->right,data);
  	}

  	else 
  	{
  		root->left = Insert(root->left,data);
  	}
  	return root;
  }

  bool Search(bstNode* root,int data)
  {
  	if(root==NULL)
  	{
  		return false;
  	}
  	if(root->data == data)
  	{
  		return true;
  	}

  	else if(root->data > data)
  	{
  		return Search(root->left,data);
  	}
 
  	else
  	{
  		return Search(root->right,data);
  	}
  }

  int findHeight(bstNode* root)
  {
  	if(root==NULL)
  	{
  		return -1;
  	}

  	int leftHeight = findHeight(root->left);
  	int rightHeight = findHeight(root->right);

  	return max(leftHeight,rightHeight)+1;
  }
  
  void levelOrder(bstNode* root)
  {
  	queue<bstNode*>Q;//creating a queue of pointers to store the references of children of the specific node for level order traversal
  	Q.push(root);//first pushed the root
  	while(!Q.empty())//until the queue becomes empty
  	{
  		bstNode* current = Q.front();
  		cout<<current->data<<" ";//print the current data
  		if(current->left!=NULL)
  		{
  			Q.push(current->left);//pushing the left child of the current pointer if it is not empty

  		}

  		if(current->right!=NULL)
  		{
  			Q.push(current->right);//pushing the right child of the current pointer if it is not empty
  		}
  		Q.pop();//removing the current element
  	}


  }

  void inOrder(bstNode* root)
  {
  	if(root == NULL)
  	{
  		return;
  	}
  	cout<<root->data<<" ";
  	inOrder(root->left);
  	inOrder(root->right);
    }
  

