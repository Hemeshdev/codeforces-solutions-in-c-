#include <bits/stdc++.h>
using namespace std;

int main() 
{
  int a,b;
  cin>>a>>b;
  int tot =240;
  tot-=b;
  int ans =0;
  int sum=0;
  for(int i=1;i<=a;i++){
    sum+=5*i;
    if(sum<=tot){
      ans++;
    }
    else{
      break;
    }
  }
  cout<<ans<<endl;


}
