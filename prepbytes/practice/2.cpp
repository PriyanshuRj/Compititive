#include <bits/stdc++.h>
using namespace std;

int main()
{
  int num,count =0;
  cin>>num;
  for(int i =0;i<num;i++){
    int a,b;
    cin>>a>>b;
    if(b-a>=2)count++;
  }
  cout<<count;
  
  return 0;
}