#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int n,k;
        cin>>n>>k;
        char s[n];
        cin>>s;
        for(int i =k-1;i>=0;i--){
            char temp =s[i];
            s[i] = s[0];
            s[0] = temp;

            
            
        }
        cout<<s<<endl;
    }
    return 0;
}