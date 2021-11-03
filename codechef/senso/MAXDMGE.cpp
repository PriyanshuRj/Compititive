#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n],arr2[n];
        for(int i =0;i<n;i++) cin>>arr[i];
        for(int i =0;i<n;i++){
            int maxand = 0;
            int val = arr[i];
            for(int j=i+1;j<n;j++) {
                val = val&arr[j];
                if(val>maxand) maxand = val;
            }
            val = arr[i];
            for(int j = i-1;j>=0;j--){
                val = val&arr[j];
                if(val>maxand) maxand = val;                
            }
            arr2[i] = maxand;
        }
        for(int i =0;i<n;i++) cout<<arr2[i]<<" ";
        cout<<endl;

    }
}