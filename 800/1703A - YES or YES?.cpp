#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      string temp;
      cin>>temp;
      transform(temp.begin(),temp.end(),temp.begin(),::tolower);
      if(temp=="yes") cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
