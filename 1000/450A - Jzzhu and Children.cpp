#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t,m;
    cin>>t>>m;
    int maxi = -1;
    int ans =0;
    for(int i=0;i<t;i++){
      float temp;
      cin>>temp;
      if(ceil(temp/m)>=maxi){
        maxi = ceil(temp/m);
        ans = i+1;
      }
    }
    cout<<ans<<endl;
}
