#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        long a,b;
        cin>>a>>b;
        long maxnum = b;
        long div = 1,cnter = 0;
        while(maxnum>1){
            maxnum = maxnum/2;
            div *=2;
            cnter ++;
        }
        int arr[cnter+1];
        cnter++;
        long nval = cnter;
        while(cnter--){
            long erase =max(div,a) - a;
            long i = max(div,a);
            if(cnter<nval)
                if( (((b/div) - (a/div))/2)*div> *min_element (arr+cnter+1, arr + nval)) {
                    arr[cnter] = ((((b-a-1)/div)/2 )*div);
                    continue;
                }
            cout<<div<<endl; 
            for(;i<=b;i++){
                if((i&div)==0) erase ++; 
            }
            div /=2;
            arr[cnter] = erase;
        }
        long maximumtoerrase = *min_element (arr, arr + nval);
        // cout<<maximumtoerrase<<endl;
    }
    return 0;
}