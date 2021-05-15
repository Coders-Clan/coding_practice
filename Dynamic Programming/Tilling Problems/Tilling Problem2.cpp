/****************************************************************************************************************************************************
Problem Name: Tilling Problem - II
Problem Difficulty: 2
Problem Constraints: 1 <= T<= 1000 <br>
1 <= N,M <= 100000
Problem Description:
Given a floor of size n x m. Find the number of ways to tile the floor with tiles of size  1 x m . A tile can either be placed horizontally or vertically.

Input Format: First line of input contains an integer <b>T</b> denoting the number of test cases. Then T test cases follow. <br />The first line of each test case contains two integers <b>N</b> and <b>M</b>.
Sample Input: 2
2 3
4 4
Output Format: Print answer for every test case in a new line modulo <b>10^9+7</b>.
Sample Output: 
1
2
****************************************************************************************************************************************************/

/*Solution*/

#include<bits/stdc++.h> 
using namespace std; 

int Till(int n,int m)
{  
    int tile[n+1];
    for(int i=1;i<=n;i++)
    {
        if(i<m)
         {tile[i]=1;}
        else if(m==i)
        {tile[i]=2;}
        else
        {
         tile[i] = tile[i-1]+tile[i-m];
        }
    }
    return tile[n];
}

int main()
{
   int T; cin>>T;
   while(T--)
   {
   int n,m;cin>>n>>m;
   cout<<"The number of ways : "<<Till(n,m)<<endl;
}
}

