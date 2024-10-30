#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      int one = max({a,b,c});
      int two = min({a,b,c});
      if(a!=one && a!=two) cout<<a<<endl;
      else if(b!=one && b!=two) cout<<b<<endl;
      else cout<<c<<endl;
    }
}
