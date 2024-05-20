#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    int s1=sqrt((a*b)/c);
    int s2=sqrt((c*b)/a);
    int s3=sqrt((a*c)/b);
    cout<<4*(s1+s2+s3)<<endl;
}
