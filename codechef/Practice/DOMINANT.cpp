#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b<c || b+c<a || c+a<b) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}