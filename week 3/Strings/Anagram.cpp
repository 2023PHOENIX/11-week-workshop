#include<bits/stdc++.h>

using namespace std;

bool solve(string a,string b){
  
  int Hash1[26] = {0};
  int Hash2[26] = {0};

  for(int i=0;i<a.length();i++)
    Hash1[(int)(a[i]-'a')]++;
  for(int i=0;i<b.length();i++)
    Hash2[(int)(b[i]-'a')]++;

  for(int i=0;i<26;i++)
    {
      if(Hash1[i]!=Hash2[i])
        {return false;}
  }
  return true;
}

int main(){
  string s; cin>>s;
  string b; cin>>b;
  cout<<solve(s,b);
}
