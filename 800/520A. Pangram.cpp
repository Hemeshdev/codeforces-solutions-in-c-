#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    if(t<26){
      cout<<"NO"<<endl;
      return 0;
    }
    string str ;
    cin>>str;
    vector<int>temp(26,0);
    for(int i=0;i<t;i++){
      temp[tolower(str[i])-'a']=1;
    }
    int sum = accumulate(temp.begin(),temp.end(),0);
    if(sum==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}
