#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
    while(t--){
        string s;
        cin>>s;
        int size = s.size();
        if(size>10){
            cout<<s[0]+to_string(size-2)+s[size-1]<<endl;
        }else{
          cout<<s<<endl;
        }
        
    }

}
