#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
    if(t<=2){
        cout<<"no"<<endl;
        return 0;
    }
	if(t%2==0){
		cout<<"yes";
	}else{
		cout<<"no";
	}

}
