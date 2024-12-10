#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int a,b;
    cin>>a>>b;
    int temp = 6-max(a,b)+1;
    if(temp==1){
      cout<<"1/6"<<endl;
    }else if(temp==2){
      cout<<"1/3"<<endl;
    }else if(temp==3){
      cout<<"1/2"<<endl;
    }else if(temp==4){
      cout<<"2/3"<<endl;
    }else if(temp==5){
      cout<<"5/6"<<endl;
    }else{
      cout<<"1/1"<<endl;
    }
    
}
