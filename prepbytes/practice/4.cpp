#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        int num;
        cin>>num;
        int sum =0;
        for(int i =1; i<num ;i++){
            if(num%i==0) sum +=i;
        }
        if(sum==num) cout<<"true"<<endl;
        else cout<<"false"<<endl;
    }
    return 0;
}