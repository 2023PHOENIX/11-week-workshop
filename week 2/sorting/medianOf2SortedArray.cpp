#include<bits/stdc++.h>

using namespace std;

int median(int *arr,int *brr,int n,int m){
  int i{0},j{0};
  int m1=-1;
  int m2=-1;
  if((n+m)%2 ==1)
  {
  for(int c=0;c<=(n+m)/2;c++)
      {
      if(i!=n and j!=m)
        m1 = (arr[i]<brr[j])?arr[i++]:brr[j++];
      else if(arr[i]<brr[j])
        m1 = arr[i++];
      else
        m1 = brr[j++];
      }
  return m1;
  }
  else
  {

    for(int c=0;c<=(n+m)/2;c++){
      m2 = m1;
        if(i!=n and j!=m)
          m1 = (arr[i]<brr[j])?arr[i++]:brr[j++];
        else if(arr[i]<brr[j])
          m1 = arr[i++];
        else
          m1 = brr[j++];
        }

  return  (m1+m2)/2;


  }

}

int main()
{
  int n;  cin>>n;
  int m; cin>>m;
  int *arr = new int[n];
  int *brr = new int[m];
  for(int i=0;i<n;i++)cin>>arr[i];
  for(int i=0;i<m;i++)cin>>brr[i];
  cout<<median(arr,brr,n,m)<<endl;

}
