#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		int mihai =0;
		int bianca =0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]%2==0){
				mihai+=arr[i];
			}else{
				bianca+=arr[i];
			}
		}
		if(mihai>bianca){
			cout<<"yes"<<endl;
		}else{
			cout<<"no"<<endl;
		}
		
	}
	return 0;
	
}
