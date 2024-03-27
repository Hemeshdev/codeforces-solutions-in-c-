#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main() 
{
    string one,two,three;
    cin>>one;
    cin>>two;
    cin>>three;
    unordered_map<char,int>mp;
    for(auto i:three){
      mp[i]++;
      
    }
    for(auto i:one){
      mp[i]--;
      if(mp[i]==0) mp.erase(i);
    }
    for(auto i:two){
      mp[i]--;
      if(mp[i]==0) mp.erase(i);
    }
    if(mp.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
