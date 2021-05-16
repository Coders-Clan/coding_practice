/********************************************************PROBLEM STATEMENT*********************************************************************************
Given a positive integer N, count all possible distinct binary strings of length N such that there are no consecutive 1’s.
Examples: 

Input:  N = 2
Output: 3
// The 3 strings are 00, 01, 10

Input: N = 3
Output: 5
// The 5 strings are 000, 001, 010, 100, 101
/************************************************************************************************************************************************************

/*Solution*/

#include<bits/stdc++.h> 
using namespace std; 

int consecutive_one(int n)
{
    int zero[n];
    int ones[n];
     zero[0] = ones[0] = 1;
    for(int i=1;i<n;i++)
    {
        zero[i]=zero[i-1]+ones[i-1];   // because if we have zero at the end we can add both zero or one
        ones[i]=zero[i-1];             // but in case of we have one at the end then we have just the choice of adding zero in the end
    }
    return(zero[n-1]+ones[n-1]);
}

int main()
{
    int n; cin>>n;
    cout<<"No of ways of representing : "<<consecutive_one(n);
}
