#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int s,n;
    cin>>s>>n;
    vector<pair<int,int>>temp;
    for(int i=0;i<n;i++){
      int a,b;
      cin>>a>>b;
      temp.push_back({a,b});
    }
    sort(temp.begin(),temp.end());
    bool flag = true;
    for(auto i:temp){
      if(i.first<s){
        s+=i.second;
      }else{
        flag = false;
        break;
      }
    }
    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
