#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    int ans1 = min(a,b);
    int ans2 = max((a-ans1)/2,(b-ans1)/2);
    cout<<ans1<<" "<<ans2;
}
