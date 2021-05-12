#include<bits/stdc++.h>
using namespace std;

 
int minstep(int n,int dp[])
{
    int step =0;
   // base case
    if(n==1)
    return 0;
    if(dp[n]!=0) //lookup if n is already computed
      return dp[n];
      //compute if dp[n] is not known
    int opt1,opt2,opt3;   //options-> n/3 ; n/2 ; n-1
    opt1=opt2=opt3=INT_MAX;
      if(n%3==0)
      {
          opt1=minstep(n/3,dp);
      }
      if(n%2==0)
      {
          opt2=minstep(n/2,dp);
      }
        opt3=minstep(n-1,dp);

     step = min(min(opt1,opt2),opt3);
      return dp[n] = step+1; 
    }
int main()
{
    int n;
    cin>>n;
   int dp[100] = {0};
   cout<<minstep(n,dp);
    return 0;
}
