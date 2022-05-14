#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b,c;
        cin>>c>>a>>b;
        long long sum = c+c-2;
        if(a<b){
            sum += (a-1) + (c-b);
        }
        else{
            sum += (b-1) + (c-a);
        }
        int d = c-a+1,e = c-b+1;
        if(d<b) sum += d-1;
        else sum += b-1;
        if(e<a) sum += e-1;
        else sum += a-1;
        cout<<sum<<endl;

    }
    return 0;
}