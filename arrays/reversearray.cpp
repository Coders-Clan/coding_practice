#include<iostream>
using namespace std;

int reverse(int arr[],int n)
{
    int begin,end,temp;
    begin=0;
    end=n-1;
    while(begin<end)
    {
       temp=arr[begin];
       arr[begin]=arr[end];
       arr[end]=temp;
       begin++;
   end--;
   }
   for(int i=0;i<n;i++)
    cout<<arr[i]<<"\n";
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
   reverse(arr,n);
}
