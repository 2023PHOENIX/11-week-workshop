#include<bits/stdc++.h>

using namespace std;

int windowSliding(int *arr,int n,int k){
  // initally add all the values in your sum;
  int totalSum{0};
  int currentSum{0};

  for(int i=0;i<k;i++)totalSum+=arr[i];
  // now window slide one by one remove one add one




  currentSum = totalSum;
  for(int i=k;i<n;i++)
    {
      currentSum = currentSum + arr[i] - arr[i-k];
      totalSum = max(currentSum,totalSum);
    }
    return totalSum;
}
int main(){

  int n;  cin>>n;
  int *arr = new int[n];
  for(int i=0;i<n;i++)cin>>arr[i];
  int d;  cin>>d;
  cout<<windowSliding(arr,n,d)<<endl;

}
