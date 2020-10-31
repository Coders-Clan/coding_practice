#include<iostream>
using namespace std;

maxCircularArraySum(int arr[],int n)
{
    if (n==1)
    return arr[0];

    int sum=0;
    for(int i=0;i<n;i++)
    {
       sum+=arr[i];
    }
    int max_so_far=arr[0],current_max=arr[0],min_so_far=arr[0],current_min=arr[0];
    for(int i=1;i<n;i++)
    {
       //kadane algo to find the max sub-array
       current_max=max(arr[i],current_max+arr[i]);
       max_so_far=max(max_so_far,current_max);
 
       //kadane algo to find the min sub-array
         current_min=min(arr[i],current_min+arr[i]);
       min_so_far=min(min_so_far,current_min);

    }
    if(min_so_far==sum)
      return max_so_far;
   else
   return max(max_so_far,sum-min_so_far);

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
   cout<<"maxCircularSubarraySum="<<maxCircularArraySum(arr,n)<<endl;
   return 0;
}
