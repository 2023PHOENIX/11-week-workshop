const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> solve(int *arr,int n){
    unordered_map<int,int> map;

    for(int i=0;i<n;i++)
        map[arr[i]]++;

    vector<int> a;

    for(int i=0;i<n;i++){
         if(map[arr[i]]==1)
            a.push_back(arr[i]);
    }
    return a;
}


int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    auto a = solve(arr,n);

    for(auto &i : a)
        cout<<i<<" ";

}
