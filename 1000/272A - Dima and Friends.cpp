#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    int count =0;
    for(int i=0;i<t;i++){
      int temp;
      cin>>temp;
      count+=temp;
    }
    int ans= 0;
    for(int i=1;i<=5;i++){
      if((count+i)%(t+1)!=1) ans++;
    }
    cout<<ans<<endl;
}
