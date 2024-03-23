#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<int>temp;
    for(int i=0;i<t;i++){
      int q;
      cin>>q;
      temp.push_back(q);
    }
    sort(temp.begin(),temp.end());
    int count =0;
    int tot = accumulate(temp.begin(),temp.end(),0);
    int sum=0;
    for(int i=t-1;i>=0 && sum<=tot;i--){
      sum+=temp[i];
      tot-=temp[i];
      count++;
    }
    cout<<count<<endl;
}
