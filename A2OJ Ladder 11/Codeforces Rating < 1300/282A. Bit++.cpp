#include <bits/stdc++.h>
using namespace std;

int main(){
	int count =0;
    int i;
    cin>>i;
    while(i--){
        string a;
        cin>>a;
        for(int j=0;j<a.length();j++){
            if(a[j]=='+' && a[j+1]=='+'){
                count++;
            }
            else if(a[j]=='-' && a[j+1]=='-'){
                count--;
            }
        }
    }
    cout<<count;

}
