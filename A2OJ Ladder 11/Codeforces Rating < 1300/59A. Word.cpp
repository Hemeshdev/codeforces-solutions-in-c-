#include <bits/stdc++.h>
using namespace std;


int main() {
    string s;
    cin>>s;
    int up = 0;
    int down = 0;
    for(int i = 0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90) down++;
        else if(s[i]>=97 && s[i]<=122) up++;
    }
    string ans = "";
    if(up>=down){
        for(int i = 0;i<s.size();i++){
            if(s[i]>=65 && s[i]<=90){
                ans+=char(int(s[i])+32);
            }else{
                ans+=s[i];
            }
        }
    }else{
        for(int i = 0;i<s.size();i++){
            if(s[i]>=97 && s[i]<=122){
                ans+=char(int(s[i])-32);
            }else{
                ans+=s[i];
            }
        }
    }
    cout<<ans<<endl;
    
    return 0;

}
