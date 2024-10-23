#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    double l;
    cin>>n>>l;
    vector<double>temp;
    for(int i=0;i<n;i++){
      double t;
      cin>>t;
      temp.push_back(t);
    }
    sort(temp.begin(),temp.end());
    double ans = 0;
    for(int i=0;i<temp.size()-1;i++){
      ans = max(ans,(temp[i+1]-temp[i])/2);
    }
    ans = max(ans,(l-temp[temp.size()-1]));
    ans = max(ans,(temp[0]));
    cout<<fixed<<setprecision(9)<<ans<<endl;
}
