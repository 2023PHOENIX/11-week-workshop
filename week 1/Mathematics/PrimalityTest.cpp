#include<bits/stdc++.h>

using namespace std;

bool isPrime(int n){

  bool flag{true};

  for(int i=2;i<=sqrt(n);i++)
      if(n%i==0)flag = false;

  return flag;
}

int main(){
  int n;  cin>>n;

  cout<<isPrime(n)<<endl;
  // complexity O(sqrt(n))
}
