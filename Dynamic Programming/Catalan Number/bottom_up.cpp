/****************************************************************PROBLEM STATEMENT**************************************************************************
Problem Name: Catalan Numbers
Problem Difficulty: None
Problem Constraints: 1 <= N <= 100
Problem Description:
Print nth [Catalan Number](https://en.wikipedia.org/wiki/Catalan_number).
The first few Catalan numbers for n = 0, 1, 2, 3, … are 1, 1, 2, 5, 14,.. .

Input Format: One integer n
Sample Input: 10
Output Format: Print the catalan number at position N.
Sample Output: 16796
***************************************************************************************************************************/

/*Solution*/

#include <bits/stdc++.h>
using namespace std;

int catalan_number(unsigned int n)
{
    vector<unsigned long int>dp(n+1);
   dp[0]=dp[1]=1;
  for(int i=2;i<=n;i++)
  {
      dp[i] = 0;
      for(int j=0;j<i;j++)
      {
          dp[i]+=dp[j]*dp[i-j-1];
      }
  }
  return dp[n];   
}

int main()
{
    unsigned int n;
    cin>>n;
   cout<<catalan_number(n);
    }
