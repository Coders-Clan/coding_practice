#include <bits/stdc++.h>
using namespace std;

int minCoins(int n, int coins[], int T, int dp[])
{
    int ans;
    //base case:
    if (n == 0)
        return 0;
    //lookup case
    if (dp[n] != 0)
        return dp[n];
    //recursive case
    for (int i = 0; i < T; i++)
    {
        if (n - coins[i] >= 0)
        {
            int subprob = minCoins(n - coins[i], coins, T, dp);

            ans = min(ans, subprob);
        }
    }
    return dp[n] = ans + 1;
}

int main()
{
    int N = 15;
    int coins[] = {1, 7, 10};
    int dp[100] = {0};
    int t = sizeof(coins) / sizeof(coins[0]);
    cout << minCoins(N, coins, t, dp);
}

//time complexity = O(TN)
