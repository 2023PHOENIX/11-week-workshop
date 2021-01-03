#include<bits/stdc++.h>

using namespace std;
string solve(string s){
  string S;
  bool Hash[26] = {false};

  for(int i=0;i<s.length();i++){
    Hash[s[i]-'a'] = true;
  }
for(int i=0;i<26;i++)
{
  if(Hash[i]==false)
    S.push_back(i+'a');
}

  return S;
}
int main(){
  // checking for paragama

  string s; cin>>s;
  cout<<solve(s);
}
