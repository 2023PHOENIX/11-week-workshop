#include<bits/stdc++.h>

using namespace std;

int binarySeach(int *arr,int n,int x){

  int start{0};
  int end{n};

  while(start<end){
    int mid =  start + (end-start)/2;

    if(arr[mid] == x)return mid;

    if(arr[mid]>x)
    {
      end = mid -1;
    }
    if(arr[mid]<x)
    {
      start = mid+1;
    }


  }
}
int main(){
  int n;  cin>>n;
  int * A = new int[n];

  for(int i=0;i<n;i++)cin>>A[i];

  cout<<binarySeach(A,n,4);
}
