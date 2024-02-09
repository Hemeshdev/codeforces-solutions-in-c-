#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,h;
    cin>>n>>h;
    int tot = 0;
    for(int i =0 ; i<n ; i++){
        int a ;
        cin>>a;
        if(a<=h){
            tot++;
        }else if(a>h){
            tot+=2;
        }
    }
    cout<<tot<<endl;
    return 0;

}
