// A Duck number is a positive number which has zeroes present in it,
// For example 3210, 8050896, 70709 are all Duck numbers.
// Please note that a numbers with only leading 0s is not considered as Duck Number.
 // For example, numbers like 035 or 0012 are not considered as Duck Numbers. A number like 0
// 1203 is considered as Duck because there is a non-leading 0 present in it.


#include<bits/stdc++.h>

using namespace std;

bool DuckNumber(string s){
  bool flag = false;
  for(int i=1;i<s.length();i++)
  {
    if(s[i] == '0')
      {
        flag = true;
        break;
      }
  }
  if(s[0]=='0')
    return false;
  else
    return flag;


}
int main(){
  string s; getline(cin,s);

  cout<<DuckNumber(s);
}
