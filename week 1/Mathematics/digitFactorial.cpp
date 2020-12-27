#include<bits/stdc++.h>

using namespace std;

double findDigit(int n){
  double value{0};

  for(int i=2;i<=n;i++){
    value += log10(n);
  }
  return floor(value) + 1;
}
int main(){
  int n;  cin>>n;

  cout<<findDigit(n);
}
