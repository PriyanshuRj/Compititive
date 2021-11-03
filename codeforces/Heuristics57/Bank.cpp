#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        int j =1;
        for(int i =0;i<b/5;i++){
            a = a + (a/4);
            if(j*6<(i+2)*5 && j*6<=b){
                j++;
                a = a - (a/10);
        
            }
        }
        cout<<a<<endl;


    }
}