#include<bits/stdc++.h>

using namespace std;

void solve(int *arr,int n,int d){
  int start{0},end{0};

  for(int i=0;i<n;i++){
    start = i; end = min(i+d-1,n-1);
    while(start<end){
      swap(arr[start++],arr[end--]);
    }
  }

}
int main(){
  int n;  cin>>n;
  int d;  cin>>d;
  int *arr = new int[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  solve(arr,n,d);
  for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
