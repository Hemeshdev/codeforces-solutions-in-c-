#include <bits/stdc++.h>
using namespace std;

void sieve(int n,vector<bool>&result){
  vector<bool>temp(n+1,true);
  temp[0]=false;
  temp[1] = false;
  for(int i=2;i<=n;i++){
    if(temp[i]==true){
      for(long long j=(long long)i*i;j<=n;j+=i){
        temp[j] = false;
      }
    }
  }
  result = temp;
}


int main() 
{
    int n;
    cin>>n;
    vector<bool>result;
    sieve(1000000,result);
    for(int i=0;i<n;i++){
      long long temp;
      cin>>temp;
      long long sq = sqrt(temp);
        if (sq * sq == temp && result[sq]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
