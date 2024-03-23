#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string temp;
    cin>>temp;
    bool falg = false;
    for(auto i:temp){
      if(i=='H' || i=='Q' || i=='9'){
        falg = true;
        break;
      }
    }
    if(falg) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
