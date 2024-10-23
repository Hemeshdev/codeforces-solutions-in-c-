#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    unordered_map<string,vector<string>>mp;
    for(int i=0;i<n;i++){
      string temp;
      cin>>temp;
      if(mp.find(temp)==mp.end()){
        mp[temp].push_back(temp);
        cout<<"OK"<<endl;
      }else{
        int size = mp[temp].size();
        string newt = temp+to_string(size);
        mp[temp].push_back(newt);
        cout<<newt<<endl;
      }
    }
}
