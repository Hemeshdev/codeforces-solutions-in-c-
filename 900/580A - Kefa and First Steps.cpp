#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);
    }
    int maxi =0;
    int count =1;
    for(int i=1;i<t;i++){
        if(v[i]>=v[i-1]){
            count++;

        }
        else{
            maxi = max(maxi,count);
            count =1;
        }
    }
    maxi = max(maxi,count);
    cout<<maxi<<endl;
}
