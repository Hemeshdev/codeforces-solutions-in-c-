#include <bits/stdc++.h>
using namespace std;

int main() 
{
    vector<int>temp(4,0);
    for(int i=0;i<4;i++){
      cin>>temp[i];
    }
    sort(temp.begin(),temp.end());
    cout<<temp[3]-temp[0]<<" "<<temp[3]-temp[1]<<" "<<temp[3]-temp[2];
}
