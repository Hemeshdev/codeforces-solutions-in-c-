#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      double a,b;
      cin>>a>>b;
      cout<<setprecision(9)<<ceil(abs(a-b)/10.0)<<endl;
    }
}
