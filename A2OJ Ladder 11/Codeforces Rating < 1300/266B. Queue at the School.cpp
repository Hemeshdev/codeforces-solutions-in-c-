#include <bits/stdc++.h>
using namespace std;


int main() {
    int a,b;
    cin>>a>>b;
    string str;
    cin>>str;
    while(b){
        for(int i= 0;i<a-1;i++){
            if(str[i]=='B' && str[i+1]=='G'){
                swap(str[i],str[i+1]);
                i++;
            }
        }
        b--;
    }
    cout<<str<<endl;
    return 0;

}
