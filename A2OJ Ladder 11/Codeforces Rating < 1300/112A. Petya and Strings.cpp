#include <bits/stdc++.h>
using namespace std;

int main(){
	string a;
    string b;
    cin>>a;
    cin>>b;
    int n = a.size();
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    int count1 =0 , count2 =0;
    
    if(a<b)cout<<-1;
    else if(a>b)cout<<1;
    else cout<<0;
}
