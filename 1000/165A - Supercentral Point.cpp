#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    int t;
    cin>>t;
    vector<int>x,y;
    for(int i=0;i<t;i++){
      int a,b;
      cin>>a>>b;
      x.push_back(a);
      y.push_back(b);
    }
    vector<int>left(t,false),right(t,false),up(t,false),down(t,false);
    for(int i=0;i<t;i++){
      for(int j=0;j<t;j++){
        if(x[i]==x[j] && y[i]<y[j]){
          up[i]=true;
        }
        else if(x[i]==x[j] && y[i]>y[j]){
          down[i] =true; 
        }else if(x[i]>x[j] && y[i]==y[j]){
          left[i] = true;
        }else if(x[i]<x[j] && y[i]==y[j]){
          right[i] = true;
        }
      }
    }
    int count =0;
    for(int i=0;i<t;i++){
      if(left[i] && right[i] && up[i] && down[i]) count++;
    }
    cout<<count<<endl;
}
