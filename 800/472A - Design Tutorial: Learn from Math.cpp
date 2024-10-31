#include <bits/stdc++.h>
using namespace std;

void seive(int n,vector<bool>&prime){
  vector<bool>temp(n+1,true);
  temp[0] = false;
  temp[1] = false;
  for(int i=2;i<temp.size();i++){
    if(temp[i]){
      for(int j=i*i;j<temp.size();j+=i){
        temp[j] = false;
      }
    }
  }
  prime = temp;
}


int main() 
{
    vector<bool>prime;
    seive(1000000,prime);
    int a;
    cin>>a;
    for(int i=4;i<=a;i++){
      if(prime[i]==false && prime[a-i]==false){
        cout<<i<<" "<<a-i<<endl;
        break;
      }
    }
    
}
