#include<bits/stdc++.h>

using namespace std;

void rotateArray(int arr[],int n,int k){
  int temp[k];
  for(int i=0;i<k;i++){
    temp[i] = arr[i];
  }
  // shift all the elements
  for(int i=0;i<n-k;i++){
    arr[i] = arr[i+k];
  }

  for(int i=0;i<k;i++){
    arr[ n-k + i ] = temp[i];
  }

}
int main(){
  // rotate the array
  int n;  cin>>n;
  int k;  cin>>k;

  int arr[n];
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }

  rotateArray(arr,n,k);
  for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
}
