// { Driver Code Starts
// C++ program to find union of
// two sorted arrays
#include <bits/stdc++.h>
using namespace std;

vector<int> printIntersection(int arr1[], int arr2[], int N, int M);

/* Driver program to test above function */
int main()
{
    int T;
    cin >> T;


    while(T--){

        int N, M;
        cin >> N >> M;
        int arr1[N];
        int arr2[M];
        for(int i = 0;i<N;i++){
            cin >> arr1[i];
        }

        for(int i = 0;i<M;i++){
            cin >> arr2[i];
        }

        // Function calling
        vector<int> v;
        v = printIntersection(arr1, arr2, N, M);

        for(int i=0;i<v.size();i++)
            cout<<v[i]<<" ";

        cout << endl;
    }

  return 0;
}
// } Driver Code Ends



vector<int> printIntersection(int arr1[], int arr2[], int N, int M)
{
    //Your code here
    vector<int> A;
    int j{0},i{0};
    while(i<N and j<M){
        if(arr1[i]==arr2[j])
        {
            if(arr1[i]!=arr1[i-1] || arr2[j]!=arr2[j-1])
            {
            A.push_back(arr1[i]);

            }
            i++;j++;

        }
        else if(arr2[j]<arr1[i])
            j++;
        else
            i++;

    }
    return A;
}
