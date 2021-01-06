const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

vector<int> solve(int *arr,int n,int k){

    unordered_map<int,int> map;
    int c{0};
    vector<int> a;
    int disCount = 0;
    for(int i=0;i<k;i++)
       { 

           if(map[arr[i]]==0)
             disCount++;
            map[arr[i]]++;
       }
    a.push_back(disCount);

    for(int i=k;i<n;i++){

        if(map[arr[i-k]]==1)
            disCount--;

        map[arr[i-k]] -= 1;

        if(map[arr[i]]==0)
            disCount++;

        map[arr[i]]++;

        a.push_back(disCount);
        }
        return a;
}
// 7 4
// 1 2 1 3 4 2 3

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;    cin>>n>>k;
    int *arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> A = solve(arr,n,k);
    for(auto &i: A)
        cout<<i<<" ";

}
