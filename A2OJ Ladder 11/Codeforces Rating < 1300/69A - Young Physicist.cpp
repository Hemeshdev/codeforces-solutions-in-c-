#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int x=0,y=0,z=0;
    int t;
    cin>>t;
    while(t--){
      int a,b,c;
      cin>>a>>b>>c;
      x+=a;
      y+=b;
      z+=c;
    }
    if(x==0 && y==0 && z==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
