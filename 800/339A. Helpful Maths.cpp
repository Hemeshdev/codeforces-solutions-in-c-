#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string t;
    cin>>t;
    vector<int>temp;
    for(int i =0 ;i<t.size();i++){
        if(t[i]!='+'){
            temp.push_back(t[i]-'0');
        }
    }
    sort(temp.begin(), temp.end());
    string ans = "";
    for(int i = 0;i<temp.size();i++){
        ans+=to_string(temp[i]);
        ans+='+';
    }
    ans.pop_back();
    cout<<ans<<endl;
    return 0;

    
}
