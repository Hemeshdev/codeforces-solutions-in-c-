#include<bits/stdc++.h>
using namespace std;
#define lli long long int

void solve(){
    int t;
    cin >>t;
    while(t--){
        int n;
        cin>> n;
        vector<int> arr(n);
        map<int, int> mp;
        int temp = 0;
        for(int i= 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        for(auto it : mp){
            if(it.second == 1){
                temp = it.first;
                break;
            }
        }
        for(int i = 0; i < n; i++){
            if(arr[i] == temp){
                cout<<(i+1)<<endl;
                break;
            }
        }
    }
}

int main(){
    solve();
}
