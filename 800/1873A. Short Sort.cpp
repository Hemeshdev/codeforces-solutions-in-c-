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
        string temp = "abc";
        string con;
        cin>>con;
    
        string temp1 = "acb";
        string temp2 = "cba";
        string temp3 = "bac";
        if(con==temp || con==temp1 || con==temp2 || con==temp3){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;

    
}
