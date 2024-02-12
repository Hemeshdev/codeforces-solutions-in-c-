#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int tot = 0;
    tot+=n/100;
    int temp1 = n%100;
    tot+=temp1/20;
    int temp2 = temp1%20;
    tot+=temp2/10;
    int temp3 = temp2%10;
    tot+=temp3/5;
    int temp4 = temp3%5;
    tot+=temp4;
    cout<<tot<<endl;
    
    
    
    return 0;
}
