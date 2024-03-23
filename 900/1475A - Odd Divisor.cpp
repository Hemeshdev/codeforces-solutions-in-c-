#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() 
{
    int n;
    cin>>n;
    while(n--){
      ll t;
      cin>>t;
      if(t&(t-1)) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      
    }
}
