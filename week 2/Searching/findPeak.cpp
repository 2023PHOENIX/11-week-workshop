#include<bits/stdc++.h>

using namespace std;

int findPeak(int *arr,int low,int high,int n)
{
  int mid = (low+high)/2;

  if((mid==0 || arr[mid-1] <= arr[mid]) and
  (arr[mid] >= arr[mid+1]||mid == n-1))
    return arr[mid];
  else if(arr[mid]<arr[mid-1] and mid>0)
    return findPeak(arr,0,mid-1,n);
  else
    return findPeak(arr,mid+1,high,n);
}
int main(){
  int n;  cin>>n;

  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  cout<<findPeak(arr,0,n-1,n)<<endl;
}
