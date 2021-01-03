#include<bits/stdc++.h>

using namespace std;

string solve(string s){
   int i{0},j = s.length()-1;
   string str;
   for(i = s.length()-1;i>=0;i--){
     if(s.at(i)=='.')
     {
       for(int K = i+1;K<=j;K++)
          str.push_back(s[K]);

        j = i-1;
        str.push_back('.');

     }

   }
   for(i=0;i<=j;i++)
    str.push_back(s[i]);

    return str;
}
int main(){
  string s; cin>>s;
  cout<<solve(s);
}
