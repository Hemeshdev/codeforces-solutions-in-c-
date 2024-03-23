#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>temp;
    for(int i=0;i<n;i++){
      int t;
      cin>>t;
      temp.push_back(t);
    }
    sort(temp.begin(),temp.end());
    for(auto i:temp){
      cout<<i<<" ";
    }
}
