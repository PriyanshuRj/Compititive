#include <bits/stdc++.h>  
 
using namespace std;
 
typedef long long ll;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
const int M=1e9+7;
long long mod(long long x){
  return ((x%M + M)%M);
}
long long add(long long a, long long b){
  return mod(mod(a)+mod(b));
}
long long mul(long long a, long long b){
 return mod(mod(a)*mod(b));
}
 
ll v[200001][30];
 
 
void solve(){
   ll l,r;
   cin>>l>>r;
    ll temp[30] = {0};
    for(int i = 0; i < 30; i++){
        temp[i] = v[r][i] - v[l-1][i];
    }
    cout<<*min_element(temp,temp+30)<<endl;
}
int main()
{
    fast_cin();
    ll t;
    cin >> t;
    forn(i,30){
        v[0][i] = 0;
    }
    for(int i = 1; i < 200001; i++){
        forn(j,30){
            ll num = 1ll<<j;
            if((i&num)==0) v[i][j] = v[i-1][j]+1;
            else v[i][j] = v[i-1][j];
        }
    }
    for(int it=1;it<=t;it++) {
        solve();
    }
    return 0;
}