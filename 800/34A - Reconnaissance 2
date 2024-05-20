#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<int>temp;
    for(int i=0;i<t;i++){
      int a;
      cin>>a;
      temp.push_back(a);
    }
    temp.push_back(temp[0]);
    int ans =INT_MAX;
    int i=0;
    int j=0;
    for(int k=0;k<t;k++){
      if(abs(temp[k]-temp[k+1])<ans){
        ans = abs(temp[k]-temp[k+1]);
        i = k;
        j = k+1;
      }
    }
    i++;
    j++;
    i = (i==t+1)? 1:i;
    j = (j==t+1)? 1:j;
    cout<<i<<" "<<j<<endl;
}
