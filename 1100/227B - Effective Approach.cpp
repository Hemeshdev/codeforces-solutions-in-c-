#include <bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;
    map<int, int>mp;
    for (int i = 1 ; i <= n ; i++){
        int num; cin >> num;
        mp[num] = i;

    }
    int m; cin >> m;
    vector<int>q(m);
    for (int i = 0 ; i < m; i++){
        cin >>q[i];
    }
    long long Vasya = 0, Petya =0 ;
    for (int i = 0 ; i < m ; i++){
        Vasya +=mp[q[i]];
        Petya += n - mp[q[i]]  + 1;
    }
    cout << Vasya << " " << Petya;
    return 0;
}
