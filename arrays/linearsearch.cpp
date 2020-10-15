#include <iostream> 
using namespace std;

int search(int arr[],int n , int key)
{
   for(int i=0;i<n;i++)
     if (arr[i]==key)
        return i;
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
int result=search(arr,number,key);

(result==-1)?cout<<"element is not present in array":cout<<"element is found at index:"<<result;
return 0;
}
