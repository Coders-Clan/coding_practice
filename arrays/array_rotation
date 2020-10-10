#include<bits/stdc++.h> 
using namespace std;   
void leftrotatebyOne(int arr[],int n)
{
    int temp=arr[0];
    int i;
    for(i=0;i<n-1;i++)
       arr[i]=arr[i+1];
       arr[i]=temp;
}
void leftrotation(int arr[],int d,int n)
{
   for (int i=0;i<d;i++)
      leftrotatebyOne(arr,n);
}
void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,rotations;
    cin>>rotations;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    leftrotation(arr,rotations,n);
    printarray(arr,n);
    return 0;
}
