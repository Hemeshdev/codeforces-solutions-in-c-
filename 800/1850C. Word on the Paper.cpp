#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        
        vector<vector<char> > v(8,vector<char>(8,'.'));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cin>>v[i][j];
            }
        }
        string ans ="";
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(v[i][j]!='.'){
                    ans+=v[i][j];
                }
            }
        }
        cout<<ans<<endl;
    }
}
