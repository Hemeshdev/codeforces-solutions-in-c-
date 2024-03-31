#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    vector<int>temp(7,0);
    for(int i=0;i<7;i++){
      cin>>temp[i];
    }
    int i=0;
    while(t>0){
      t-=temp[i];
      i++;
      i = i%7;
    }
    if(i==0) cout<<7<<endl;
    else cout<<i<<endl;
}
