#include <bits/stdc++.h>
using namespace std;
 
int main()
{
int n, k, l, c, d, p, nl, np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;
int a=k*l;
 a=a/nl;
int b=c*d;
int e=p/np;
vector<int> z;
z.push_back(a);
z.push_back(b);
z.push_back(e);
int min=z[0];
for(int i=0;i<3;i++)
{
    if(z[i]<min)
    {
        min=z[i];
    }
}
cout<<(min/n);
}
