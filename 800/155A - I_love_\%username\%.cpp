#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main() {
    
    int t;
    cin>>t;
    vector<int>temp(t);
    for(int i=0;i<t;i++){
      cin>>temp[i];
    }
    int mini = temp[0];
    int maxi = temp[0];
    int count =0;
    for(int i=1;i<t;i++){
      if(temp[i]>maxi){
        count++;
        maxi = temp[i];
      }else if(temp[i]<mini){
        count++;
        mini = temp[i];
      }
    }
    cout<<count<<endl;
}
