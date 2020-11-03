#include <bits/stdc++.h>
using namespace std;

#define MAX 1000
class Stack
{
	int top;

public:
	int a[MAX];
	Stack() { top = -1; }
	bool push(int x)
	{
		if (top >= (MAX - 1))
		{
			cout << "Stack overflow";
			return false;
		}
		else
		{
			a[++top] = x;
			cout << x << "pushed into stack \n";
			return true;
		}
	}
	int pop()
	{
		if (top < 0)
		{
			cout << "Stack underflow";
			return 0;
		}
		else
		{
			int x = a[top--];
			return x;
		}
	}
	int peek()
	{
		if (top < 0)
		{
			cout << "Stack is empty.";
			return 0;
		}
		else
		{
			int x = a[top];
			return x;
		}
	}
	bool isEmpty()
	{
		return (top < 0);
	}
};
int main()
{
	 Stack s; 
    s.push(10); 
    s.push(20); 
    s.push(30); 
    cout << s.pop() << " Popped from stack\n"; 
	cout<<s.peek() <<" topmost element\n";
  
    return 0; 
}
