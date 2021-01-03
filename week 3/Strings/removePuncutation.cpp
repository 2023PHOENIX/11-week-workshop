#include<bits/stdc++.h>

using namespace std;


int main(){
  string S; getline(cin,S);

  for(int i=0,len = S.size();i<len;i++){
    if(ispunct(S[i]))
    {
      S.erase(i--,1);
      len = S.size();

    }
  }

  cout<<S<<endl;
}
