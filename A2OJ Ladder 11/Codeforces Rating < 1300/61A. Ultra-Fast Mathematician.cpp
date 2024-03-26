#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string temp1,temp2;
    cin>>temp1;
    cin>>temp2;
    string ans ="";
    for(int i=0;i<temp1.size();i++){
      if(temp1[i]==temp2[i]){
        ans.push_back('0');
      }else{
        ans.push_back('1');
      }
    }
    cout<<ans<<endl;
    
    return 0;
}
