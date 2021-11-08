#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr,arr + n);
        int counter =0,ct = 0;
        int seter =0;
        vector<int> vct1,vct2;
        vct2.push_back(arr[0]);
        for(int i=1;i<n;i++){
            if(counter>1) {
                seter = -1;
                break;
            }
            else if(arr[i]==arr[i-1]){
                vct1.push_back(arr[i]);
                counter ++;
                ct ++;
            }
            else if(arr[i]>arr[i-1]){ 
                counter = 0;
                vct2.push_back(arr[i]);
            }
            if(counter>1) {
                seter = -1;
                break;
            }
        }
        if(seter == -1) cout<<-1<<endl;
        else{
            sort(vct1.begin(),vct1.end());
            sort(vct2.begin(),vct2.end(), greater<int>());
            
            for(auto i = vct1.begin(); i != vct1.end();i++){
                cout<<*i<<" ";
            }
            for(auto i = vct2.begin(); i != vct2.end();i++){
                cout<<*i<<" ";
            }
            cout<<endl;
        }


    }
}
