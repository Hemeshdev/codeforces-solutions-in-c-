#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int ans =0;
    int temp=-1;
    while(t--){
        int a;
        cin>>a;
        if(temp!=a){
            ans++;
            temp=a;
        }

    }
    cout<<ans<<endl;
    
    return 0;

}
