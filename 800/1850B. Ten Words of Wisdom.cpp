#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int mx =0;
        int s =0;
        for(int i=1;i<=n;i++){
            int a,b;
            cin>>a>>b;
            if(a<=10 && b>mx){
                mx = max(mx,b);
                s = i;
            }
        }
        cout<<s<<endl;
    }
}
