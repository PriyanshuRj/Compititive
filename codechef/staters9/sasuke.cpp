#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        long num;
        cin>>num;
        long arr[num];
        int set = 0;
        for(int i =0 ;i<num;i++){
             cin>>arr[i];
             if(i<=0 && __gcd(arr[i-1],arr[i]) != arr[i]){
                 cout<<-1<<endl;
                 set = -1;
             }
        }
        if(set == -1) continue;
        long arr2[num];
        arr2[0] = arr[0];
        for(int i =0 ;i<num;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        // for(int i = 1;i<num;i++){
        //     int asd = arr[i];
        //     while(true){

        //     }
        // }
    }
    return 0;
}