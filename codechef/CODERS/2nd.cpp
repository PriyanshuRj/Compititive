#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int n,x,k;
        cin>>n>>x>>k;
        int ross[n],russ[n];
        for(int i = 0;i<n;i++ ) cin>>ross[i];
        for(int i = 0;i<n;i++ ) cin>>russ[i];
        int count = 0 ;
        for(int i = 0;i<n;i++ ){
            if((russ[i]>ross[i]) && (russ[i]-ross[i])<=k) count ++;
            else if((russ[i]<=ross[i]) && (ross[i]-russ[i]) <= k ) count ++;
        }
  
        if(count>=x) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}