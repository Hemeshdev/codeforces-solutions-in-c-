#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string temp;
    cin>>temp;
    string helo = "hello";
    int i=0;
    int j=0;
    while(j<temp.size() && i<helo.size()){
      if(temp[j]==helo[i]){
        i++;
      }
      j++;
    }
    if(i==helo.size()) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
