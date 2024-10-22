#include <bits/stdc++.h>
using namespace std;

bool islucky(int n) {
    string temp = to_string(n);
    for (auto i : temp) {
        if (i != '4' && i != '7') 
            return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0 && islucky(i)) {
            flag = true;
            break;
        }
    }
    if (flag) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
