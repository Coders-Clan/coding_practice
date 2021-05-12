#include<iostream>
using namespace std;

int fib(int n , int dp[])
{
    if(n==0 || n==1)
    return n;

    int ans;
    ans = fib(n-1,dp) + fib(n-2,dp);
    return dp[n] = ans;
}
int main()
{
    int n;
    cin>>n;
    int dp[100] = {0};
    cout<<fib(n,dp)<<endl;
}

// Dynamic Programming reduces the complexity of computing Fibonnaci from O(2^n) to O(n)
// Time complexity = O(n)
// Space complexity = O(n)        
