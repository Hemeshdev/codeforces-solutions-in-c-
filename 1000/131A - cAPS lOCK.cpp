#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s;
    cin >> s;
    int n = s.size();
    int capital = 0;
    for (int i = 1; i < n; ++i) {
        if (isupper(s[i])) capital++;
    }
    
    if (capital == n - 1) {
        for (char c : s) {
            if (islower(c))
                cout << (char)(c - 32);
            else        
                cout << (char)(c + 32);
        }
    }
    else {
        cout << s;
    }
}
