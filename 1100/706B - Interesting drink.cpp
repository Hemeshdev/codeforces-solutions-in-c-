#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>temp(n,0);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    int days;
    cin>>days;
    sort(temp.begin(),temp.end());
    for(int i=0;i<days;i++){
      int num;
      cin>>num;
      int t = upper_bound(temp.begin(),temp.end(),num)-temp.begin();
      cout<<t<<endl;
    }
    
    
}
