#include<bits/stdc++.h>

using namespace std;



bool * isPrime(int n){
    bool * Prime = new bool[n+1];
    for(int i=0;i<=n;i++){
      Prime[i] = true;
    }

    // memset(Prime, true,sizeof(Prime));

    for(int i=2;i<=sqrt(n);i++){
      if(Prime[i]){
        for(int j=i+i;j<=n;j+=i)
          Prime[j] = false;
      }
    }

    return Prime;
}

int main(){
  int n;  cin>>n;

  bool* P = isPrime(n);

  for(int i=0;i<=n;i++){
    cout<<i<<" :" <<P[i]<<endl;
  }

}
