#include<bits/stdc++.h>

using namespace std;

bool areBalanced(string s)
{
  stack<char> str;

  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='(')
      {
        str.push(s[i]);
        continue;
      }
    else if(s[i]==')')
    {
      if(str.empty())
        return false;
      else
      {
        str.pop();

      }
    }
  }

  return (str.empty()==true)?true:false;
}

int main()
{
  string s; getline(cin,s);

  cout<<areBalanced(s);
}
