#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v{a,b,c};
        sort(v.begin(),v.end());
        if(v[2]+v[1]>=10){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
}
