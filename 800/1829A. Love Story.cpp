#include <bits/stdc++.h>
using namespace std;
int main(){
	
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int size = s.size();
		string s2 = "codeforces";
		int count =0;
		for(int i=0;i<size;i++){
			if(s[i]!=s2[i]){
				count++;
			}
		}
		cout<<count<<endl; 
	}
	
	return 0;
}
