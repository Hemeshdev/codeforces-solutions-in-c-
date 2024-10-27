#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      string temp;
      cin>>temp;
      int one = 0;
      for(int i=0;i<3;i++){
        one+=temp[i]-'0';
      }
      int two = 0;
      for(int i=3;i<6;i++){
        two+=temp[i]-'0';
      }
      if(one==two) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
