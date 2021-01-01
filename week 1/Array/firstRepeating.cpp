#include<bits/stdc++.h>
using namespace std;

int solve(int *arr,int n){
  set<int> Hash;
  int index{-1};
  for(int i=0;i<n;i++)
  {
    if(Hash.find(arr[i]) != Hash.end())
    {
      index = i;break;
    }
    else{
      Hash.insert(arr[i]);
    }
  }

}
int main(){
  int n;  cin>>n;
  int *ar = new int[n];

  for(int i=0;i<n;i++)
    cin>>ar[i];

  cout<<solve(ar,n);

}
