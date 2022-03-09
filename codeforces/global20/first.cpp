#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d", &t);
    for (int it = 0; it < t; it++)
    {
        long long ar[3];
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        if((ar[1]==ar[2] && ar[0]%2==0) || (ar[0]==ar[1] && ar[2]%2==0)) cout<<"YES"<<endl;
        else if(ar[2] ==(ar[0] + ar[1])) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}