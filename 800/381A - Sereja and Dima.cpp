#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    vector<int>temp(t,0);
    for(int i=0;i<t;i++){
      cin>>temp[i];
    }
    int i=0;
    int j=t-1;
    int one =0, two =0;
    bool flag = true;
    while(i<=j){
      if(temp[i]>temp[j]){
        if(flag){
          one+=temp[i];
          flag = false;
        }else{
          two+=temp[i];
          flag = true;
        }
        i++;
      }else{
        if(flag){
          one+=temp[j];
          flag = false;
        }else{
          two+=temp[j];
          flag = true;
        }
        j--;
      }
    }
    cout<<one<<" "<<two<<endl;
}
