#include<iostream>
using namespace std;

selection_sort(int arr[],int n)
{
  int i,j;
  int MIN, temp;
  for(i=0;i<n-1;i++)
  {
     MIN=i;    //declaring a MIN which would be compared with the remaining array
     for(j=i+1;j<n;j++)
     {
        if(arr[j]<arr[MIN])      
         MIN=j;
     }
   temp=arr[i];
   arr[i]=arr[MIN];
   arr[MIN]=temp; 
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
   selection_sort(arr,n);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   return 0;
}
