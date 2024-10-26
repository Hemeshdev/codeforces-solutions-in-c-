#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    int count =1;
    int temp = a;
    while(a%10!=b){
      if(a%10==0){
        break;
      }
      a+=temp;
      count++;
    }
    cout<<count<<endl;
}
