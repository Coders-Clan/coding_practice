#include<iostream>
using namespace std;

int EquilibriumIndex(int arr[],int n)
{
   int i,sum=0,leftsum=0;
   for(i=0;i<n;i++)
      sum+=arr[i];
   for(i=0;i<n;i++)
   {
     sum=sum-arr[i];
      if(sum==leftsum)
           return i;
      leftsum=leftsum+arr[i];

    }
    return -1;

}


int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
   cout<<"1st Equilibrium Index: "<<EquilibriumIndex(arr,n);
   return 0;
}
