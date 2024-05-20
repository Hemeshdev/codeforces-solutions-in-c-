#include <bits/stdc++.h>
using namespace std;

bool fool(char c){
  if(c=='1' || c=='4') return true;
  return false;
}
int main() 
{
    string str;
    cin>>str;
    if(str[0]=='4'){
      cout<<"NO"<<endl;
      return 0;
    }
    for(int i=0;i<str.size();i++){
      if(!fool(str[i])){
        cout<<"NO"<<endl;
        return 0;
      }
    }
    if(str.find("444")!=string::npos){
      cout<<"NO"<<endl;
      return 0;
    }
    cout<<"YES"<<endl;
}
