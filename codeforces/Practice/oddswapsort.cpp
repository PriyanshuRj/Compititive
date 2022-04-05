#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    for(int it =0;it<t;it++){
        vector<int> even;
        vector<int> odd;
        int n;
        cin>>n;
        int num;
        for(int i = 0;i<n;i++){
            cin>>num;
            if(num%2==0) even.push_back(num);
            else odd.push_back(num);
         
        }
        vector<int>::iterator ptr;
        if(is_sorted(even.begin(),even.end()) && is_sorted(odd.begin(),odd.end())) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
            }
    return 0;
}