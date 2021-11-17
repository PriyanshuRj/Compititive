#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        long x,y,z;
        cin>>x>>y>>z;
        if(x+y>z) cout<<"NO"<<endl;else cout<<"YES"<<endl;
    }
    return 0;
}