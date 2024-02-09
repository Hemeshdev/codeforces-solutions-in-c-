#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,k;
    cin>>n>>k;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int po = v[k-1];
    int count = 0;
    for(int i=0;i<n;i++){
        if(v[i]>0 && v[i]>=po){
            count++;
        }
    }
    cout<<count;

}
