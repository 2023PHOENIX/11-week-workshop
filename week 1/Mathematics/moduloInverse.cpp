#include<bits/stdc++.h>

using namespace std;

int inverse(int a,int m){
  for(int i=0;i<m;i++){
    if((i*a)%m==1)
      return i;
  }
  return -1;
}
int main(){
  int a,m;  cin>>a>>m;

  cout<<inverse(a,m);
}
