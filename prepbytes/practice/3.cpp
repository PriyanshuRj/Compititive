#include<bits/stdc++.h>
using namespace std;
int main(){
    char c;
    cin>>c;
    if(c=='V'){
        for(int i =1;i<=5;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            for(int j=0;j<(10-2*i);j++) cout<<" ";
            for(int j=i;j>=1;j--){
                cout<<j;
            }
            cout<<endl;
        }
    }
    return 0;
}