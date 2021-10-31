#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string first[4];
        string second[4];
        for(int i=0;i<4;i++) cin>>first[i];
        for(int i=0;i<4;i++) cin>>second[i];
        int count =0;
        for(int i =0;i<4;i++){
            for(int j =0;j<4;j++){
                if(first[i]==second[j]){ 
                    count++;
                    break;
                }
                if(count>=2) break;
                if(i==3 && count ==0) break;
            }
        }
        if(count>=2) cout<<"similar"<<endl;
        else cout<<"dissimilar"<<endl;
    }
}