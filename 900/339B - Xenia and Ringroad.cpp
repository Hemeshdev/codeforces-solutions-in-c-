#include <bits/stdc++.h>
using namespace std;

int main() 
{
    long long n,m;
    cin>>n>>m;
    vector<long long>temp(m,0);
    for(long long i=0;i<m;i++) cin>>temp[i];
    long long count =temp[0]-1;
    for(int i=0;i<m-1;i++){
      if(temp[i]<=temp[i+1]){
        count+=temp[i+1]-temp[i];
      }else{
        count+=n-temp[i]+temp[i+1];
      }
    }
    cout<<count<<endl;
}
