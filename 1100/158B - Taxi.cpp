#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>temp(5,0);
    for(int i=0;i<n;i++){
      int t;
      cin>>t;
      temp[t]++;
    }
    int ans = 0;
    ans+=temp[4];
    int t =min(temp[3],temp[1]); 
    ans+= t;
    temp[3]-=t;
    temp[1]-=t;
    ans+=temp[3];
    ans+=temp[2]/2;
    if(temp[2]%2==1){
      ans++;
      temp[1] = max(0,temp[1]-2);
    }
    ans+=(temp[1]+3)/4;
    cout<<ans<<endl;
    
}
