#include <bits/stdc++.h>
using namespace std;

int rec(int n, int a, int b, int c, vector<int>& dp) {
    if (n == 0) return 0; 
    if (n < 0) return INT_MIN; 
    if (dp[n] != -1) return dp[n];
    return dp[n] = 1 + max({rec(n - a, a, b, c, dp),rec(n - b, a, b, c, dp),rec(n - c, a, b, c, dp)});
}

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;
    vector<int> dp(n + 1, -1); 
    int ans = rec(n, a, b, c, dp);  
    cout<<ans;

    return 0;
}
