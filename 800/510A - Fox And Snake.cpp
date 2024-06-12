#include <bits/stdc++.h>
using namespace std;

int main() 
{

      int n,m;
      cin>>n>>m;
      vector<vector<char>>snake(n,vector<char>(m,'#'));
      bool flag = true;
      for(int i=1;i<n;i+=2){
        int start = (flag==true) ? 0 :1;
        int end = (flag ==true) ? m-1 :m;
        for(int j =start;j<end;j++){
          snake[i][j] = '.';
        }
        flag = !flag;
      }
      
      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          cout<<snake[i][j];
        }
        cout<<endl;
      }

}
