#include <iostream> 
using namespace std;

int binsearch(int arr[],int l ,int h, int key)
{
   
   if (l<=h) 
   {
      int mid=(l+h)/2;
      if(key==arr[mid])
       return mid;
      else if (key<arr[mid])
        return binsearch(arr,l,mid-1,key);
      else
      {
        return binsearch(arr,mid+1,h,key);
      }
         
   }  
   return -1;
}

int main()
{
int number,i,key;
cin>>number;
int arr[number];
for(i=0;i<number;i++)
{
   cin>>arr[i];
}
cin>>key;
int result=binsearch(arr,0,number-1,key);

(result==-1)?cout<<"element is not present in array":cout<<"element is found at index:"<<result;
return 0;
}
