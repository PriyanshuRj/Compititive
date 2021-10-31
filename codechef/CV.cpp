#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        string s;
        cin>>s;
        int count =0;
        for(int i =0;i<num;i++){
            if(s[i] != 'a' && s[i] != 'e' && s[i] != 'o' && s[i] != 'u' && s[i] != 'i' && (s[i+1] == 'a' || s[i+1] == 'e' || s[i+1] == 'o' || s[i+1] == 'u' || s[i+1] == 'i')){
                count++;
                i++;
            }
        }
        cout<<count<<endl;
    }
}