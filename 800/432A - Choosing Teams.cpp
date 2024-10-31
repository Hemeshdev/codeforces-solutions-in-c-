#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k; 
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=5-x;
    }
    sort(arr.begin(),arr.end());
    int count=0;
    for(int i=n-1;i>=2;i=i-3){
        if(arr[i]>=k && arr[i-1]>=k && arr[i-2]>=k){
            count++;
        }
        else{
            break;
        }
    }
    cout<<count<<endl;
}
