#include<bits/stdc++.h>

using namespace std;


bool Isbalanced(string s)
{
  stack<char> str;

  char x;


  for(int i=0;i<s.length();i++)
  {
    if(s[i]=='(' || s[i] =='[' || s[i] =='{')
    {
      str.push(s[i]);
      continue;
    }

    if(str.empty())
      return false;
    else if(s[i]==')' || s[i] =='}' || s[i] == ']')
    {
      switch(s[i])
      {
        case ')':
            {
              x = str.top();
              str.pop();
              if(x=='[' or x=='{')
                return false;
              break;
            }
        case ']':
            {
               x = str.top();
              str.pop();
              if(x=='(' || x=='{')
                return false;
              break;
            }
        case '}':
            {  x = str.top();
              str.pop();
              if(x=='[' || x=='(')
                return false;
              break;
            }
      }
    }
    else
    {
      continue;
    }

  }

  return (str.empty()==true)?true:false;
}


int main()
{
  int t;  cin>>t;
  while(t--)
  {
  string s; cin>>s;

  cout<<Isbalanced(s)<<endl;
   }
}
