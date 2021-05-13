#include <bits/stdc++.h>
using namespace std;

int minCoins(int n, int coins[], int T)
{
    
    int dp[100] ={0};
    //base case:
    if (n == 0)
        return 0;
   for(int i=1;i<=n;i++) // i iterates through all the states 
   {
       dp[i] = INT_MAX;
       for(int j=0;j<T;j++)   // j iterates through all the coins array 
       {
       if(i-coins[j]>=0) //we compare if the number we need fits within the coin range that is the selection of coin should be such that it is less than the number selected
       {
         int subprob = dp[i-coins[j]];
         dp[i] = min(dp[i], subprob+1); // we choose the min of the two
       }
       }
   }
   return dp[n];
}

int main()
{
    int N = 15;  // the value that we require 
    int coins[] = {1, 7, 10};  //denotes the value of coins available
    int dp[100] = {0};
    int t = sizeof(coins) / sizeof(coins[0]);
    cout << minCoins(N, coins, t);  // finding min number of coins to reach that value
} 

//time complexity = O(TN)
