#include<bits/stdc++.h>

using namespace std;

void missingNumber(int *arr,int n){
  int Hash[n+1] = {0};
  int missing,repeating;
  // we need to find missing and repeating number : O(n)
  for(int i=0;i<n;i++){
    Hash[arr[i]]++;
  }
  for(int i=0;i<n;i++)
  {
    if(Hash[i]==0)
      missing = i;
    if(Hash[i]==2)
      repeating = i;

  }

  cout<<missing << " " << repeating<<endl;

}
int main(){
  int n;  cin>>n;
  int *A = new int[n];

  for(int i=0;i<n;i++){
     cin>>A[i];
  }
  missingNumber(A,n);
}
