#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        long long a,b;
        cin>>a>>b;
        if(a*107>= b*100) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}