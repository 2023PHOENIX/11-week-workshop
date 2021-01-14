#include<bits/stdc++.h>

using namespace std;


bool isOperator(char s)
{
  switch(s)
    {
      case '+':
      case '-':
      case '*':
      case '/':
        return true;

    }
    return false;


}
string PrefixToInfix(string prefix)
{

  stack<string> infix;

  for(int i=prefix.length()-1;i>=0;i--)
  {
    if(isOperator(prefix[i]))
    {

      string op1 = infix.top(); infix.pop();
      string op2 = infix.top(); infix.pop();


      string temp = "(" + op1 + prefix[i] + op2 +")";

      infix.push(temp);

    }
    else
    {
      infix.push(string(1,prefix[i]));
    }
  }

  return infix.top();
}

int main()
{
  string pre_exp = "*-A/BC-/AKL";
   cout << "Infix : " << PrefixToInfix(pre_exp);
   return 0;
}
