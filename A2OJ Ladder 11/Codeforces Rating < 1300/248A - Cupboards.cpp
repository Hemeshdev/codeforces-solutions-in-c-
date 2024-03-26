#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    
    int t;
    cin>>t;
    int k=t;
    int a=0,b=0;
    while(k--){
      int x,y;
      cin>>x>>y;
      a+=x;
      b+=y;
    }
    int ans =0;
    ans+=min(a,(t-a));
    ans+=min(b,(t-b));
    cout<<ans<<endl;
}
