#include<bits/stdc++.h>

using namespace std;
vector<int> solve(int *arr1,int *arr2,int n,int m){
  vector<int> result;

  int i{0},j{0};
  while(i<n and j<m){
    if(arr1[i]<arr2[j])
      {
        if(arr1[i]!=arr1[i-1]||i==0)
          result.push_back(arr1[i]);
        i++;
      }
    else if(arr1[i]>arr2[j])
    {
      if(arr2[j]!=arr2[j-1]||j==0)
        result.push_back(arr2[j]);

      j++;
    }
    else{
      if((arr1[i]!=arr1[i-1] && arr2[j]!=arr2[j-1])||j==0||i==0)
        result.push_back(arr1[i]);
      i++;j++;
    }
  }
  for(;i<n;i++)
    {
         if(arr1[i]!=arr1[i-1])
                result.push_back(arr1[i]);
    }
    for(;j<m;j++){
        if(arr2[j-1]!=arr2[j])
                result.push_back(arr2[j]);
              }
  return result;
}
int main(){
  int n,m;    cin>>n>>m;
  int *arr = new int[n];
  int *brr = new int[m];

  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=0;i<m;i++)cin>>brr[i];

  auto v = solve(arr,brr,n,m);
  for(auto &i:v){
    cout<<i<<" ";
}
}
