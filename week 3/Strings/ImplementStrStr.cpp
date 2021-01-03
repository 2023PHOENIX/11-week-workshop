#include<bits/stdc++.h>

using namespace std;

int solve(string s,string p){
  int n= s.size();
  int m = p.size();
  int count{0},i{0},j{0};
  for( i=0;i<=(n-m);i++){
    for(j = 0;j<m;j++){
      if(s[i+j]==p[j])
        count++;
    }
    if(count==m)
      return i;
  }
  return -1;
}
int main(){
  string s; cin>>s;
  string p; cin>>p;
  cout<<solve(s,p);
}
