#include<iostream>
using namespace std;

int subarraySum(int arr[],int n, int sum)
{
   int i, curr_sum=arr[0], start=0;
   for(i=1;i<=n;i++)
   {
      while(curr_sum>sum && start<i-1)
      {
         curr_sum = curr_sum-arr[start];
         start++;
      }
      if(curr_sum==sum)
      {
         cout<<"the subarray is found between the indexes "<<start<<" and "<<i-1;
         return 1;
      }
      if(i<n)
       curr_sum=curr_sum+arr[i];
 }
     
     {
        cout<<"subarray not found";
        return 0;
     }
    

}


int main()
{
   int n,sum;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }
    cin>>sum;
   subarraySum(arr,n,sum);
   return 0;
}
