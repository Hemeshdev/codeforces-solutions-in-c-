#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    int one = 0;
    int two = 0;
    for(int i=0;i<t;i++){
      int a,b;
      cin>>a>>b;
      if(a>b){
        one++;
      }else if(a<b){
        two++;
      }
    }
    if(one>two){
      cout<<"Mishka"<<endl;
    }else if(one<two){
      cout<<"Chris"<<endl;
    }else{
      cout<<"Friendship is magic!^^"<<endl;
    }
    
}
