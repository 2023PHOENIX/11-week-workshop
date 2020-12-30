#include<bits/stdc++.h>

using namespace std;
int solve(int *arr,int n){

  int start{0},end{n-1};

  while(start<=end){
    int mid = (start + end)/2;

    if((arr[mid]>arr[mid+1] and arr[mid-1]<arr[mid])
    || (mid == 0 and arr[mid+1]<arr[mid]) ||
    (mid == n-1 and arr[mid]> arr[mid-1]))
      return mid;
    else if(arr[mid+1]>arr[mid])
      start = mid+1;
    else
      end = mid-1;
  }

}
int main(){
  int n;  cin>>n;
  int *a = new int[n];
  for(int i=0;i<n;i++)cin>>a[i];

  cout<<solve(a,n);
}
