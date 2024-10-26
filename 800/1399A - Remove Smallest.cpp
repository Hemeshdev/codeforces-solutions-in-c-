#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int n;
      cin>>n;
      vector<int>temp(n,0);
      for(int i=0;i<n;i++){
        cin>>temp[i];
      }
      sort(temp.begin(),temp.end());
      bool flag =true;
      for(int i=0;i<n-1;i++){
        if(temp[i+1]-temp[i]>1){
          flag = false;
          break;
        }
      }
      if(flag) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
    }
}
