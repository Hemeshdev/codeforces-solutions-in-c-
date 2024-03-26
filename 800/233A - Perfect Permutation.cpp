#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    int t;
    cin>>t;
    if(t%2!=0 || t==1) cout<<-1<<endl;
    else{
      vector<int>temp(t,0);
      for(int i=0;i<t;i++){
        temp[i] = i+1;
      }
      for(int i=0;i<t;i+=2){
        swap(temp[i],temp[i+1]);
      }
      for(auto i:temp){
        cout<<i<<" ";
      }
    }
}
