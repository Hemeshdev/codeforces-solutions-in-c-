#include <bits/stdc++.h>
using namespace std;

int main() 
{

      int a,b,c;
      cin>>a>>b>>c;
      int tot=a+b+c;
      int avg = tot/3;
      cout<<abs(avg-a)+abs(avg-c)+abs(avg-b);
}
