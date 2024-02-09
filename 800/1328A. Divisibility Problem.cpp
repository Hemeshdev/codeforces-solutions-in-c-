#include <iostream>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      int a,b;
      cin>>a>>b;
      int rem = a%b;
      int tot = b-rem;
      if(tot==b) cout<<0<<endl;
      else cout<<tot<<endl;
    }
    
    
    return 0;
}
