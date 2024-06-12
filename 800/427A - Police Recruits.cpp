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
      int pos =0,neg=0;
      for(int i=0;i<n;i++){
        if(temp[i]==-1){
          if(pos){
            pos--;
          }else{
            neg++;
          }
        }else{
          pos+=temp[i];
        }
      }
      cout<<neg;
}
