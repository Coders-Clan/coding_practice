#include<iostream>
using namespace std;

insertion_sort(int arr[],int n)
{
  int i,j;
  int value,hole;
  for(i=1;i<n;i++)
  {
      value=arr[i];
       hole=i;
     while(hole>0&&arr[hole-1]>value)
     {
        arr[hole]=arr[hole-1];
        hole--;
     }
     arr[hole]=value;
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
   insertion_sort(arr,n);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   return 0;
}
