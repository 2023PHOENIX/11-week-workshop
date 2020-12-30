#include<bits/stdc++.h>

using namespace std;

int solve(int root)
{
  int start=0;
  int end = root;
  int mid;
  int ans = 0;
  while(start<=end){
    mid = start +(end-start)/2;

    if(mid*mid==root)
      return mid;
    if(mid*mid > root)
      end = mid -1;
    else
      {
        ans = mid;
        start = mid +1;
      }
  }

  return ans;
}

int main(){
  int num;  cin>>num;

  cout<<solve(num)<<endl;
}
