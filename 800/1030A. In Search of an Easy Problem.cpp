#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int arr[t];
    for(int i= 0 ;i<t;i++){
        cin>>arr[i];
    }
    bool flag  =true;
    for(int i = 0;i<t;i++){
        if(arr[i]==1){
            flag = false;
            break;
        }
    }
    if(flag) cout<<"EASY"<<endl;
    else cout<<"HARD"<<endl;
    
    return 0;

}
