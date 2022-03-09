#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int n;
        cin>>n;
        int arr[n];
        for(int i =0;i<n;i++) cin>>arr[i];
        sort(arr,arr+n);
        long long num1 = (arr[n-1]-arr[0])*arr[n-2];
        long long num2 = (arr[n-2]-arr[0])*arr[n-1];
        if(num1>num2) cout<<num1<<endl;
        else cout<<num2<<endl;
    }
    return 0;
}