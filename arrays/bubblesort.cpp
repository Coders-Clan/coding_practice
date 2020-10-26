#include<iostream>
using namespace std;

bubble_sort(int arr[],int n)
{
  int i,j;
  int temp;
  for(i=0;i<n-1;i++)
  {
     int flag=0;
     for(j=0;j<n-i-1;j++)
     {
        if(arr[j]>arr[j+1])
         {
            temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp; 
           flag =1;
         }
     }
   if(flag==0)
    break;
  }

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
   bubble_sort(arr,n);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   return 0;
}
