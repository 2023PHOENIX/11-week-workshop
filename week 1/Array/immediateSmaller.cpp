#include<bits/stdc++.h>

using namespace std;
int solve(int *arr,int n,int x){
  int minDiff{INT_MAX},number;
  for(int i=0;i<n;i++){
    if(x-arr[i]<minDiff and x-arr[i]>0)
    {
      minDiff = abs(x - arr[i]);
      number = arr[i];
    }
  }
  return number;
}
int main(){
  int n;  cin>>n;


  int *arr = new int[n];

  for(int i=0;i<n;i++)  cin>>arr[i];
  int x;  cin>>x;
  cout<<solve(arr,n,x);
}
