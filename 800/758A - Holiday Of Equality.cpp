#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<int>temp(t,0);
    int maxi = 0;
    for(int i=0;i<t;i++){
      cin>>temp[i];
      maxi = max(maxi,temp[i]);
    }
    int ans = 0;
    for(int i=0;i<t;i++){
      ans += maxi - temp[i];
    }
    cout<<ans<<endl;
}
