#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
    int count = 0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==1 && b==1) || (b==1 && c==1) || (c==1 &&a==1) || (a==1 && b==1 && c==1)){
            count++;
        }
    }
    cout<<count;

}
