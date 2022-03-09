#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int n;
        cin>>n;
        int arr[n];
        int arr2[n];
        for(int i =0;i<n;i++){
            cin>>arr2[i];
            arr[i] = arr2[i];
        }
        sort(arr,arr+n);
        long long start = -1,end = -1,sum =0;
        for(int i = 0;i<n;i++){
            if(start == -1 && arr[i] !=arr2[i]){
                start = arr[i];
            }
            if(start != -1 && arr[i] ==arr2[i]){
                end = arr[i-1];
                sum += end - start;
                start = -1;
                end = -1;
            }
            if(i == n-1 && start != -1){
                end = arr[i];
                sum += end - start;
            }
        }
        cout<<sum<<endl;

    }
    return 0;
}