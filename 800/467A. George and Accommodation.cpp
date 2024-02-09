#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i = 0;i<t;i++) {
        int a,b;
        cin>>a>>b;
        arr[i]=b-a;
    }
    int count = 0;
    for(int i = 0;i<t;i++){
        if(arr[i]>=2){
            count++;
        }
    }
    cout<<count<<endl;
    
    return 0;

}
