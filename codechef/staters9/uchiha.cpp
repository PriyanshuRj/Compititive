#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int a,b;
        cin>>a>>b;
        vector<pair<string,int>> vect;
        int finalsum =0;
        for(int i =0;i<a;i++){
            string s;
            int sumer = 0;
            cin>>s;
            int sum = 0,sumct =0 ;
            for(int j =0;j<b;j++){
                sumer += s[j] - '0';
                if(s[j]=='1'){
                    sum = sum + b-j-1 - sumct;
                    sumct++;
                }
                
               

            }
            pair<string,int> p1(s,b-sumer);
            vect.push_back(p1);
            finalsum += sum;
        }
        sort(vect.begin(),vect.end());
        long long sum2 =0;
        long long numzero = 0;
        for(int i = a-1;i>=0;i--){
            sum2 = sum2 + (numzero*(b-vect[i].second));
            numzero += vect[i].second;
        
        
        }
    
   
        cout<<sum2+finalsum<<endl;

    }
    return 0;
}