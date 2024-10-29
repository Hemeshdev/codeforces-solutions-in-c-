#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    int temp = n%m;
    cout<<min({n*a,((n/m)*b+temp*a),((n/m)+1)*b});
    
}
