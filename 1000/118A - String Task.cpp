#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string temp;
    cin>>temp;
    string ans ="";
    for(auto i:temp){
      if(i=='a' || i=='e' || i=='o' || i=='i' || i=='u' || i=='A' || i=='E' || i=='I' || i=='O' || i=='U' || i=='y' || i=='Y'){
        continue;
      }else if(isupper(i)){
        ans.push_back('.');
        ans.push_back(tolower(i));
      }else{
        ans.push_back('.');
        ans.push_back(i);
      }
    }
    cout<<ans<<endl;
}
