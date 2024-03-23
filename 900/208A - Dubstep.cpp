#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    string temp;
    cin>>temp;
    int i=0;
    string ans ="";
    while(i<temp.size()){
      string t = temp.substr(i,3);
      if(t=="WUB"){
        i+=3;
        if(ans[ans.size()-1]!=' ') ans+=' ';
      }
      else {ans+=temp[i]; i++;}
    }
    cout<<ans<<endl;
}
