#include<bits/stdc++.h>

using namespace std;
int solve(int *arr,int n)
{
  long long leftsum{0};
 long long rightsum{0};
 int index{0};
 for(int i=1;i<n;i++)
   rightsum += arr[i];

   if(n==1)
       return 1;

 for(int i=1;i<n;i++){
   leftsum += arr[i-1];
   rightsum -= arr[i];

   if(rightsum == leftsum)
     {
       return i+1;
     }
 }
 return -1;
}
int main(){
  int n;  cin>>n;
  int *arr = new int[n];

  for(int i=0;i<n;i++)cin>>arr[i];

  cout<<solve(arr,n)<<endl;
}
