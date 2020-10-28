#include<iostream>
using namespace std;


void merge(int* ALR, int* L, int left_length, int* R, int right_length) {
    int l = 0;
    int r = 0;
    for (int i = 0; i < left_length + right_length;) {

        if (l == left_length)ALR[i++] = R[r++];
        else if (r == right_length)ALR[i++] = L[l++];
        else ALR[i++] = (R[r] > L[l]) ? L[l++] : R[r++];

    }
}

void merge_sort(int* ALR, int length) {

    if (length == 1)return;

    int mid = length / 2;

    int* L = new int[mid];
    int* R = new int[length - mid];

    int k = 0;

    for (size_t i = 0; k < mid; i++)L[i] = ALR[k++];
    for (size_t i = 0; k < length; i++)R[i] = ALR[k++];

    merge_sort(L, mid);
    merge_sort(R, length - mid);

    merge(ALR, L, mid, R, length - mid);
    delete(L);
    delete(R);
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
   merge_sort(arr,n);
   for(int i=0;i<n;i++)
   {
      cout<<arr[i]<<" ";
   }
   return 0;
}
