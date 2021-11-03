#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--){
    long long num;
    cin>>num;
    while(num>1)
    {
      cout<<num<<" ";
      if(num%2==0) num = pow(num,0.5);
      else num = pow(num,1.5);
    }
    if(num ==1)cout<<num;
    cout<<endl;
  }
  return 0;
}