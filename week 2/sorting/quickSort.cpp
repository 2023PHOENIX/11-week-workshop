#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b){
  int temp = *a;
  *a =  *b;
  *b = temp;
}

int partition(int *arr,int low,int high){
  int pivot = arr[high];

  int i=low-1;

  for(int j=low;j<high;j++){

    if(arr[j]<pivot)
      {
        i++;
        swap(&arr[i],&arr[j]);
      }
  }

  swap(arr[i+1],arr[high]);
  return i+1;
}

void QuickSort(int *arr,int low,int high){
  if(low<high){
    int P = partition(arr,low,high);

    QuickSort(arr,low,P-1);
    QuickSort(arr,P+1,high);
  }
}

int main(){
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];
  QuickSort(arr,0,n-1);
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
