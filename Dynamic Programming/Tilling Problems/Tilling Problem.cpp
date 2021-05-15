/*****************************************************Problem Statement *************************************************************
Given a “2 x n” board and tiles of size “2 x 1”, count the number of ways to tile the given board using the 2 x 1 tiles.
A tile can either be placed horizontally i.e., as a 1 x 2 tile or vertically i.e., as 2 x 1 tile. 
************************************************************************************************************************************/

/*Solution*/

#include<bits/stdc++.h> 
using namespace std; 

int Till(int n)
{  // create an array to store number of ways to tile a grid of size 2xi
  int tile[n+1];
  // base case
  tile[0] = 0; tile[1] = 1;
  for(int i=2;i<=n;i++)
    tile[i]  = tile[i-1] + tile[i-2]; // use recursive formula
 return tile[n];
}

int main()
{
   int n;cin>>n;
   cout<<Till(n);
}
