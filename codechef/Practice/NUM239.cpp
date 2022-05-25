#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b;
        cin>>a>>b;
        long long sum = ((b/10) - ((a/10)+1))*3;
        if(sum <0) sum =0;
        int bsum = b-(b/10)*10;
        if(bsum>=9) sum += 3;
        else if(bsum >= 3) sum +=2;
        else if(bsum==2) sum += 1;
        int asum = ((a/10)+1)*10-a;
        if(asum>=8) sum += 3;
        else if(asum >= 7) sum +=2;
        else if(asum==1) sum += 1;
        cout<<sum<<endl;



    }
    return 0;
}