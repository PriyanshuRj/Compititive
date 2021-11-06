#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int count =0;
        for(int i=0;i<n;i++){ 
            cin>>arr[i];
            if(arr[i]%2==1) count++;
        }
        if(count>1) cout<<count/2<<endl;
        else cout<<0<<endl;
    }
}