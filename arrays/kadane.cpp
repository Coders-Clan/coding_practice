#include<iostream>
#include<algorithm>
using namespace std;

int kadane(int arr[],int n)
{
   int max_current, max_global;
   max_current=max_global=arr[0];
   for(int i=1;i<n;i++)
   {
      max_current=max(arr[i],arr[i]+max_current);
      if(max_current>max_global)
      {
         max_global=max_current;
      }
   }
 return max_global;
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
  int result=kadane(arr,n);
  cout<<result;
  return 0;
}
