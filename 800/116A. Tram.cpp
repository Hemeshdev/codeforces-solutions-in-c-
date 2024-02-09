#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int ans = INT_MIN;
    int count = 0;
    for(int i=0; i<t; i++) {
        int a,b;
        cin>>a>>b;
        count = count +b-a;
        ans = max(ans,count);
    }
    cout<<ans<<endl;
    
    return 0;

}
