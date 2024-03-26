#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string t;
    cin>>t;
    int x = int(t[0]);
    if(x>=65 && x<=90){
        cout<<t<<endl;
    }else if(x>=97 && x<=122){
        t[0] = char(x-32);
        cout<<t<<endl;
    }
    
    return 0;
}
