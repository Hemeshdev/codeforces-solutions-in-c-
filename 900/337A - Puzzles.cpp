#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>temp;
    for(int i=0;i<m;i++){
      int t;
      cin>>t;
      temp.push_back(t);
    }
    sort(temp.begin(),temp.end());
    cout<<temp[n-1]-temp[0]<<endl;
}
