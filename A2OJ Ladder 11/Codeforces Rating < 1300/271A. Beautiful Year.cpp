#include <bits/stdc++.h>
using namespace std;

bool isdistinct(int s){
    unordered_set<int>se;
    while(s){
        se.insert(s%10);
        s/=10;
    }
    if(se.size()==4) return true;
    return false;
}

int main() {
    int t;
    cin>>t;
    t++;
    while(!isdistinct(t)){
        t++;
    }
    cout<<t<<endl;
    
    return 0;

}
