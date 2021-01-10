#include<bits/stdc++.h>

using namespace std;

int prec(char a)
{
  if(a == '+' || a == '-')
    return 1;
  if(a == '*' || a == '/')
    return 2;
  if(a=='^')
    return 3;
  else
    return 0;
}

void InfixToPostfix( string infix )
{
  string postflix;


  stack<char> st;
  st.push('N');

  for(int i=0;i<infix.length();i++)
  {
      if( (infix[i]>='a' and infix[i]<='z') ||
        (infix[i]>='A' and infix[i]<='Z') )
        {
          postflix += infix[i];
        }

      else if(infix[i]=='(')
        st.push('(');

      else if(infix[i] == ')')
      {

        while(st.top()!='N' and  st.top()!='(' )
        {
          postflix += st.top();
          st.pop();
        }
        if(st.top()=='(')
          st.pop();

      }


      else
      {
        while(st.top()!='N' && prec(infix[i])<=prec(st.top()) )
        {
          postflix += st.top();
          st.pop();
        }
        st.push(infix[i]);

      }

  }


  while(st.top()!='N')
  {
    postflix += st.top();
    st.pop();
  }

  cout<<postflix<<endl;


}

int main()
{
    string exp = "a+b*(c^d-e)^(f+g*h)-i";
    InfixToPostfix(exp);
    return 0;
}
