#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int a,b;
    cin>>a;
    vector<int>boo(n+1,0);
    for(int i=0;i<a;i++){
      int temp;
      cin>>temp;
      boo[temp] =1;
    }
    cin>>b;
    for(int i=0;i<b;i++){
      int temp;
      cin>>temp;
      boo[temp] = 1;
    }
    int tot = accumulate(boo.begin(),boo.end(),0);
    if(tot==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
    
    
    return 0;
}
