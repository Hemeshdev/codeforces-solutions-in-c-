#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    string a;
    cin>>a;
    int an = 0;
    int da = 0;
    for(int i = 0;i<a.size();i++){
        if(a[i]=='A') an++;
        else da++; 
    }
    if(an>da) cout<<"Anton"<<endl;
    else if(an<da) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;

    
    return 0;

}
