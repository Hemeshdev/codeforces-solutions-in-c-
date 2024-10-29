#include <bits/stdc++.h>
using namespace std;

int main() 
{
    unordered_map<char,int>mp;
    for(auto i:"codeforces"){
      mp[i] = 1;
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      char c;
      cin>>c;
      if(mp[c]==1) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
    
}
