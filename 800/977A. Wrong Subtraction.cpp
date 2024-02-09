#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    while(b--){
        if(a%10!=0){
            a--;
        }else{
            a=a/10;
        }
    }
    cout<<a<<endl;

    
    return 0;

}
