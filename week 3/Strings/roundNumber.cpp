// Round the given number to nearest multiple of 10

// Given a positive integer n, round it to nearest whole number having zero as last digit.
//
// Examples:
//
// Input : 4722
// Output : 4720
//
// Input : 38
// Output : 40
//
// Input : 10
// Output: 10
#include<bits/stdc++.h>
using namespace std;


int solve(int num){
  int rem = num%10;

  if(rem>=5){
    num = (num/10)*10 + 10;
  }
  else{
    num = (num/10)*10;
  }
  return num;
}

int main(){
  int n;  cin>>n;
  cout<<solve(n);

}
