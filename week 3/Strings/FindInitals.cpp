// Program to find the initials of a name.

#include<iostream>
using namespace std;


string solve(string s){
  string f;
  if(s.length()==0)
    return f;
  else{
    f.push_back(toupper(s[0]));
    for(int i=1;i<s.length();i++)
        if(s[i]==' ')
          f.push_back((char)toupper(s[i+1]));
  }
  return f;
}

int main(){
    string name;
    getline(cin,name);
    string S = solve(name);
    for(auto &i: S)
      cout<<i<<" ";
}
