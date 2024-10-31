#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int t;
    cin>>t;
    vector<int>temp(t,0);
    for(int i=0;i<t;i++){
      cin>>temp[i];
    }
    unordered_map<int,vector<int>>mp;
    for(int i=1;i<=t;i++){
      mp[temp[i-1]].push_back(i);
    }
    int mini = min({mp[1].size(),mp[2].size(),mp[3].size()});
    cout<<mini<<endl;
    for(int i=0;i<mini;i++){
      cout<<mp[1][i]<<" "<<mp[2][i]<<" "<<mp[3][i]<<endl;
    }
    
}
