#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    ll n,k;
    cin>>n>>k;
    if(k<=(n+1)/2){
      cout<<1+(k-1)*2<<endl;
    }else{
      cout<<2+((k-(n+1)/2)-1)*2<<endl;
    }
}
