#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int i =0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> vect;
        while(n>0){
            vect.push_back(n%10);
            n = n/10;
        }
        while(k--){
            int idx =0;
            for(int i = 0;i<vect.size();i++){
                if(vect[idx]>vect[i]) idx = i;
            }
            if(vect[idx]<9) vect[idx]++;
        }
        int prod = 1;
        for(int i = 0;i<vect.size();i++){
            prod *= vect[i];
        }
        cout<<prod<<endl;
       
        
    }
    return 0;
}