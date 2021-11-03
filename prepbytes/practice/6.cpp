#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    long long  a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a%4==0) cout<<0<<endl;
    else if(a%4==3){
      long long val1 = 3*d;
      long long val2 = c+d;
      if(b<val1){
        if(b<val2) cout<<b<<endl;
        else cout<<val2<<endl;
      }
      else{
        if(val1<val2) cout<<val1<<endl;
        else cout<<val2<<endl;
      }
    }
    else if(a%4==2){
      long long val1 = 2*b;
      long long val2 = 2*d;
      if(c<val1){
        if(c<val2) cout<<c<<endl;
        else cout<<val2<<endl;
      }
      else{
        if(val1<val2) cout<<val1<<endl;
        else cout<<val2<<endl;
      }
    }
    else{
      if(b+c<d && c<=2*b) cout<<b+c<<endl;
      else if(3*b<d && 2*b<=c) cout<<3*b<<endl;
      else cout<<d<<endl;
    }
  }
  return 0;
}