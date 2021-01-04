const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int solve(int *arr,int n)
{
    unordered_map<int,int> map;

    int maxDist{0};

    for(int i=0;i<n;i++){
        
        
        if(map.find(arr[i])==map.end())
            map[arr[i]] = i;
        
        else
        {
            maxDist = max(maxDist,i - map[arr[i]]);
        }
        
    }
    return maxDist;


}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    int *arr = new int[n];

    for(int i=0;i<n;i++)cin>>arr[i];

    cout<<solve(arr,n);
    
    

}