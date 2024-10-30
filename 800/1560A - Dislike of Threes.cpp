#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a;
      cin>>a;
      int count =0;
      int temp =1;
      while(true){
        if(temp%3!=0 && temp%10!=3){
          count++;
        }
        if(count==a){
          cout<<temp<<endl;
          break;
        }
        temp++;
      }
    }
}
