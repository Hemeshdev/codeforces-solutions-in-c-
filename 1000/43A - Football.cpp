#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    unordered_map<string,int>mp;
    string ans = "";
    int maxi =0;
    for(int i=0;i<t;i++){
      string temp;
      cin>>temp;
      mp[temp]++;
      if(mp[temp]>maxi){
        maxi = mp[temp];
        ans = temp;
      }
    }
    cout<<ans<<endl;
    
}
