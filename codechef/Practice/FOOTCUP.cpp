#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b;
        cin>>a>>b;
        if(a>0 && b>0 && a==b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}