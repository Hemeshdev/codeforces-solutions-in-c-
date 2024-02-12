#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int k,l,m,n,d;
    
    cin>>k;
    cin>>l;
    cin>>m;
    cin>>n;
    cin>>d;
    
    vector<int>temp(d+1,0);
    for(int i=k;i<=d;i+=k) temp[i]=1;
    for(int i=l;i<=d;i+=l) temp[i]=1;
    for(int i=m;i<=d;i+=m) temp[i]=1;
    for(int i=n;i<=d;i+=n) temp[i]=1;
    int tot = accumulate(temp.begin(),temp.end(),0);
    cout<<tot<<endl;
    
    return 0;
}
