const int INT_MAX = 2147483647;
const int INT_MIN = -2147483647;
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool solve(int *arr,int n,int sum){

    unordered_set<int> map;
    for(int i=0;i<n;i++){
        int temp = sum - arr[i];

        if(map.find(temp)!=map.end())
            return true;
        
        else{
            map.insert(arr[i]);
        }
    }
    return false;

}

int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL);
    int n;  cin>>n;
    int *arr = new int[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    int sum;    cin>>sum;
    cout<<solve(arr,n,sum);
}