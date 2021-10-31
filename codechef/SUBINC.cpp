#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        int array[num];
        for(int i=0;i<num;i++) cin>>array[i];
        long long count =0,ct =1,cr=0;
        for(int i =0;i<num;i++){
            ct =1;
            cr = array[i];
            for(int j=i+1;j<num;j++){
                if(cr<=array[j]){
                    cr = array[j];
                    ct++;
                }
                else break;
            }
            count += ct;
        }
        cout<<count<<endl;
    }
    return 0;
}