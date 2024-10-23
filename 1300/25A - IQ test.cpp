#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int>temp(n,0);
    for(int i=0;i<n;i++){
      cin>>temp[i];
    }
    int even =0;
    int odd = 0;
    if(temp[0]%2==0){
      even++;
    }else{
      odd++;
    }
    if(temp[1]%2==0){
      even++;
    }else{
      odd++;
    }
    if(temp[2]%2==0){
      even++;
    }else{
      odd++;
    }
    if(even>odd){
      for(int i=0;i<n;i++){
        if(temp[i]%2!=0){
          cout<<i+1<<endl;
          break;
        }
      }
    }else if(even<odd){
      for(int i=0;i<n;i++){
        if(temp[i]%2==0){
          cout<<i+1<<endl;
          break;
        }
      }
    }
}
