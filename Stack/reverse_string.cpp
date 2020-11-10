#include <bits/stdc++.h>
using namespace std;

# define MAX 50
class Stack{
	int top;
public:
    char arr[MAX];
	Stack(){top=-1;}

	char push(char item)
	{
		if(top>=(MAX-1))
		 cout<<"Stack overflow";
		else
		 arr[++top]=item;
	}
	char pop()
	{
		if(top<0)
		 cout<<"Stack underflow";
		else
		{
		 int item=arr[top--];
		 return item;
		}
	}
};	
	int main()
	{
		Stack s;
		char str[50];
		gets(str);
		for(int i=0;i<strlen(str);i++)
		  s.push(str[i]);
		for(int i=0;i<strlen(str);i++)  
		  str[i]=s.pop();
	cout<<"The reverse string is:";
	puts(str);
	return 0;
	}

