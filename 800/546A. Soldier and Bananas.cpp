#include <bits/stdc++.h>
using namespace std;


int main() {
    int k,n,w;
    cin>>k>>n>>w;
    long int tot = (w*(w+1)/2)*k;
    if(tot>n){
        cout<<tot-n<<endl;
    }else{
        cout<<0<<endl;
    }
    
    return 0;

}
