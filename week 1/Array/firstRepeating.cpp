#include<bits/stdc++.h>

using namespace std;

int solve(bool * arr, int n){
  for(int i=0;i<n;i++)
    if(arr[i]==true)
      return i;
  return -1;
}
int main(){
  int t;  cin>>t;
  while(t--){
  int n;  cin>>n;
  bool *arr = new bool[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  cout<<solve(arr,n)<<endl;
}
}
