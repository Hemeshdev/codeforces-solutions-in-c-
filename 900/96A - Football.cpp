#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string t;
    cin>>t;
    int count =0;
    int maxi = 0;
    int i=0;
    while(i<t.size()){
      int j=i;
      char temp = t[j];
      while(t[j]==temp){
        count++;
        j++;
      }
      maxi = max(maxi,count);
      count=0;
      i=j;
    }
    if(maxi>=7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
