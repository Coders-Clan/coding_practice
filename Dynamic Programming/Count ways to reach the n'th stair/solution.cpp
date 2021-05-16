/*Solution 1*/        // time complexity -> O(2^n)
#include<bits/stdc++.h>
using namespace std;


    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
         long int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        dp[2]=2;
        for(int i=3;i<=n;i++)
        {
            dp[i]= dp[i-1]+dp[i-2];
        }
        return dp[n];
    }

int main()
{
    int n; cin>>n;
    cout<<countWays(n);
}

/*Solution 2 */
