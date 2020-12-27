const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int count_digit(int n){

  // better approach than previos one
  return floor(log10(n) + 1);
}

int main()
{
        ios_base:: sync_with_stdio(false);
        cin.tie(NULL);
        int n;  cin>>n;
        cout<< count_digit(n);

}
