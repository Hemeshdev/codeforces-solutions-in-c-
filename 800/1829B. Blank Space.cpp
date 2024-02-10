#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		int size;
		cin>>size;
		int arr[size];
		for(int i=0;i<size;i++){
			cin>>arr[i];
		}
		int count =0;
		int ind = 0;
		for(int i=0;i<size;i++){
			if(arr[i]==0){
				count++;
				ind = max(count,ind);
			}else{
				count = 0;
			}
		}
		cout<<ind<<endl;
	}
	
	return 0;
}
