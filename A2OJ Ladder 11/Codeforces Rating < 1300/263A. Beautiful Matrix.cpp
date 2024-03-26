#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int>>v(5,vector<int>(5,0));
    int x =0;
    int y =0;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>v[i-1][j-1];
            if(v[i-1][j-1]!=0){
                x =i;
                y =j;
                break;
            }
        }
    }
    cout<<abs(x-3)+abs(y-3);

}
