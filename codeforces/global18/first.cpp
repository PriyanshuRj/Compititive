#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int num;
        cin>>num;
        int arr[num];
        int sum = 0;
        for(int i=0;i<num;i++){
            cin>>arr[i];
            sum += arr[i];
        }
        if(sum%num==0) cout<<0<<endl;
        else cout<<1<<endl;
    }
    return 0;
}