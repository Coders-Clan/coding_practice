#include <bits/stdc++.h>
using namespace std;

class Node{
public:	
	   int data;
	   Node *next;
};
Node *top=NULL;
void push(int val)
{
	Node*newnode=new Node;
	newnode->data=val;
	cout<<"the pushed element is "<<newnode->data<<endl;
	newnode->next=top;
	top=newnode;
}
void pop()
{
	if(top==NULL)
	 cout<<"Stack underflow"<<endl;
	else
	{
	  cout<<"the popped element is "<<top->data<<endl;
	  top=top->next;	
	}
	
}
void peek()
{
	if(top==NULL)
	 cout<<"Stack is empty";
	else
	{
		cout<<"the top element is "<<top->data<<endl;
	}
}	
void display()
{
	Node *ptr;
   if(top==NULL)
	 cout<<"Stack is empty";
	else
	{
		ptr=top;
		cout<<"Stack elements are:";
		while(ptr !=NULL)
		{
			cout<<ptr->data<<" ";
			ptr=ptr->next;
		}
	}
		cout<<endl;
}


int main()
{
	  
    push(10); 
    push(20); 
    push(30); 
    pop();
	peek();
  
    return 0; 
}
