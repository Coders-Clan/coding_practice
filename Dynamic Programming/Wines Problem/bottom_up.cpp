/* The Problem   */
/*************************************************************************************************************************************
 * The wines problem ->
 * Given an array showing the profit that every bottle of wine provides [2 3 5 1 4]
 *                                                                       i       j  
 * We can sell only the edge cases i.e. i(first one) or the j(last one) at a time and every year their value becomes multipied by the 
 * value of year itself . For eg value of this arr in 2nd yr will be -> [4 6 10 2 8] 
 * So in this way we need to find the maximum profit 
  *************************************************************************************************************************************/


#include <bits/stdc++.h>
using namespace std;

int Profit(int wines[],int i,int j,int y)
{
    if(i>j) return 0;
    int op1 = wines[i]*y + Profit(wines,i+1,j,y+1);   // op1 shows that we have selected the i and added up the rest of the array in the recursive manner
    int op2 = wines[j]*y + Profit(wines,i,j-1,y+1);  // op2 shows that we have selected the j and added up the rest of the array in the recursive manner
    return max(op1,op2);  // it returns maximum of the 2 cases
}

int main()
{
    int wines[] = {2,3,5,1,4};
    int y = 1;
    int n = sizeof(wines)/sizeof(wines[0]);
    cout<<Profit(wines,0,n-1,y);
}
