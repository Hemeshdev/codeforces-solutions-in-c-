#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i = 0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        arr[0]+=1;
        long long product = 1;
        for(int i = 0;i<n;i++){
            product*=arr[i];
        }
        cout<<product<<endl;
    }
    return 0;

    
}
