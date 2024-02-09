#include <bits/stdc++.h>
using namespace std;


int main() {
    long long int a;
    cin>>a;
    int count = 0;
    while(a){
        int c = a%10;
        if(c==4 || c==7) count++;
        a/=10;
    }
    if(count==4 || count==7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }

    
    return 0;

}
