#include<bits/stdc++.h>

using namespace std;


// complexity for finding the count is O(log N)
// using binary seach
int startingIndex(int *arr,int low,int high,int n,int x){

    int mid = (low + high)/2;

    if((x==arr[mid]) and (arr[mid-1]<x || mid == 0))// condition 1
      return mid;

    // two other cases where we need to check
    else if(x>arr[mid])
      startingIndex(arr,mid+1,high,n,x);
    else  // if condition 1 not meets run this condition
      startingIndex(arr,low,mid-1,n,x);
}
int lastIndex(int *arr,int low ,int high , int n, int x){
  int mid = (low+high)/2;

  if((x==arr[mid]) and (x<arr[mid+1]|| mid == n-1))
    return mid;
  else if(x< arr[mid])
     lastIndex(arr,low,mid-1,n,x);
  else
     lastIndex(arr,mid+1,high,n,x);
}

int countOccurence(int *arr,int n,int x){

  int i= startingIndex(arr,0,n-1,n,x);
  int j = lastIndex(arr,0,n-1,n,x);

  return j - i + 1;
}

int main(){
  int n;  cin>>n;

  int *arr = new int[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  int x;  cin>>x;
  cout<<countOccurence(arr,n,x);

}
