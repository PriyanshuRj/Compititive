#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        int n;
        cin>>n;
        vector<int> ar;
        vector<int> ar2;
        vector<int> ar3;
        int val;
        for (int i =0;i<n;i++){ cin>>val;
        ar.push_back(val);
        }
        string s;
        cin>>s;
        int div = (n+1)/2,div2 = (n+1)/2;
        if(n%2==0) div++;
        
        for(int i = 0;i<n;i++){
            
            
            if(s[i]=='1' && ar[i]<div) ar2.push_back(ar[i]);
            if(s[i]=='0' && ar[i]>div2) ar3.push_back(ar[i]);
        }
        if(ar2.size()>0 && ar3.size()>0){
            sort(ar2.begin(),ar2.end(), greater<int>());
            sort(ar3.begin(),ar3.end());
        }
        
        while(ar2.size()>0 && ar3.size()>0){
            cout<<"yes"<<endl;
            int min = ar2.back();
            int max = ar3.back();
            ar2.pop_back();
            ar3.pop_back();
            vector<int>::iterator itr = std::find(ar.begin(), ar.end(), min);
            
            ar[itr-ar.begin()] = max;
            
            vector<int>::iterator itr2 = std::find(ar.begin(), ar.end(), max);
            ar[itr2-ar.begin()] = min;
            for (int i =0;i<n;i++) cout<<ar[i]<<" ";
        cout<<endl;
        }

        
        for (int i =0;i<n;i++) cout<<ar[i]<<" ";
        cout<<endl;
    }
    return 0;
}