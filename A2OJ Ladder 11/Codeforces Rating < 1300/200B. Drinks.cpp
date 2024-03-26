#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    float sum =0;
    for(int i=0;i<n;i++){
      float temp;
      cin>>temp;
      sum+=temp;
    }
    cout<<sum/n<<endl;
    
    return 0;
}
