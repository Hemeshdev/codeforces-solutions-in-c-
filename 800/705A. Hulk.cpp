#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    string ans ="";
    bool flag = true;
    for(int i =0;i<n;i++){
      if(flag ==true){
        ans+="I hate ";
        flag = false;
      }else if(flag==false){
        ans+="I love ";
        flag = true;
      }
      if(i!=n-1){
        ans+="that ";
      }
      
    }
    ans+="it";
    cout<<ans<<endl;
    return 0;
}
