#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() 
{
    vector<vector<int>>temp(3,vector<int>(3,0));
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        cin>>temp[i][j];
      }
    }
    vector<vector<int>>ans(3,vector<int>(3,0));
    int x[9] = {-1,0,1,0,0};
    int y[9] = {0,0,0,-1,1};
    for(int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        int sum =0;
        for(int k=0;k<5;k++){
          int row = i+x[k];
          int col = j+y[k];
          if(row>=0 && row<3 && col>=0 && col<3){
            sum+=temp[row][col];
          }
        }
        if(sum%2==0) ans[i][j] = 1;
        else if(sum%2!=0) ans[i][j]=0;
      }
    }
    for(auto i:ans){
      for(auto j:i){
        cout<<j<<"";
      }
      cout<<endl;
    }
}
