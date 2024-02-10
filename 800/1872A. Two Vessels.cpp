#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        float a,b,c;
        cin>>a>>b>>c;
        float diff = abs(b-a)/(2*c);
        cout<<ceil(diff)<<endl;
    }
}
