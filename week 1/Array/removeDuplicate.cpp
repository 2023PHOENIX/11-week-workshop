#include<bits/stdc++.h>

using namespace std;

int removeDuplicate(int *arr,int n)
{
  int index{0};
  // 1 2 2 3 3 3 4 4
  // we add only when we find non duplli element 
  for(int i=0;i<n-1;i++){
    if(arr[i] != arr[i+1])
      arr[index++] = arr[i];

  arr[index++] = arr[n-1];

}
return index;

}
int main(){
  int n;  cin>>n;
  int *A = new int[n];

  for(int i=0;i<n;i++)cin>>A[i];

  cout<<removeDuplicate(A,n)<<endl;
}
