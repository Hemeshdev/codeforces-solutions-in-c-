#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>temp(n);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    int maxi = *max_element(temp.begin(),temp.end());
    int mini = *min_element(temp.begin(),temp.end());
    int ans =0;
    int indi,indb;
    for(int i=0;i<n;i++){
      if(temp[i]==maxi){ indi =i; break; }
      else ans++;
    }
    for(int i=n-1;i>=0;i--){
      if(temp[i]==mini){ indb =i; break; }
      else ans++;
    }
    if(indb<indi) ans--;
    cout<<ans<<endl;
    
    return 0;
}
