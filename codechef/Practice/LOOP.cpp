#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b){
            int sum1 = b-a;
            int sum2 = c-b+a;
            if(sum1< sum2) cout<<sum1<<endl;
            else cout<<sum2<<endl;
        }
        else{
            int sum1 = a-b;
            int sum2 = c-a+b;
            if(sum1< sum2) cout<<sum1<<endl;
            else cout<<sum2<<endl;
        }
    }
    return 0;
}