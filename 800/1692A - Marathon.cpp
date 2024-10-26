#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    while(t--){
      vector<int>temp(4,0);
      for(int i=0;i<4;i++){
        cin>>temp[i];
      }
      int one = temp[0];
      sort(temp.begin(),temp.end());
      int count =0;
      for(int i=3;i>=0;i--){
        if(temp[i]==one){
          break;
        }
        count++;
      }
      cout<<count<<endl;
    }
}
