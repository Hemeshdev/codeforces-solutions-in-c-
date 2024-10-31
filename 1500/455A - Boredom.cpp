#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> count(100001, 0);  
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        count[a]++;
    }
    vector<long long> points(100001, 0);
    for (int i = 1; i < 100001; i++) {
        points[i] = (long long) i * count[i];
    }
    vector<long long> dp(100001, 0);
    dp[1] = points[1];
    for (int i = 2; i < 100001; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + points[i]);
    }
    cout << dp[100000] << endl;

    return 0;
}
