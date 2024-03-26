#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(int t) {
    if (t <= 1) return false;
    for (int i = 2; i <= t/2; i++) {
        if (t % i == 0) return false; 
    }
    return true;
}

int main() {
    int n, m;
    cin >> n >> m;
    int ans =0;
    for (int i = n + 1; i <=m; i++) { 
        if (isPrime(i)) {
            ans = i;
            break;
        }
    }
    if(ans==m) cout<<"YES"<<endl;
    else cout << "NO" << endl;
    return 0;
}
