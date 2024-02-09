#include <bits/stdc++.h>
using namespace std;


int main() {
    string t;
    cin>>t;
    unordered_set<char>s;
    for(int i = 0;i<t.size();i++){
        s.insert(t[i]);
    }
    if(s.size()%2!=0){
        cout<<"IGNORE HIM!"<<endl;
    }else{
        cout<<"CHAT WITH HER!"<<endl;
    }
    
    return 0;
}
