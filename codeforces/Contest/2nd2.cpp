#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> p32;
typedef pair<ll,ll> p64;
typedef pair<double,double> pdd;
typedef vector<ll> v64;
typedef vector<int> v32;
typedef vector<vector<int> > vv32;
typedef vector<vector<ll> > vv64;
typedef vector<vector<p64> > vvp64;
typedef vector<p64> vp64;
typedef vector<p32> vp32;
ll MOD = 998244353;
double eps = 1e-12;
#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())

void solve()
{
  ll n, a, b;
  cin >> n >> a >> b;
  
  if ( abs(a - b) > 1 ||a + b > n - 2) {
    cout <<-1<<endl;
    return;
  }


  // declared the vector
  vector<int> vect;
  int start = 1;
  int end = n;
  if (a == b) {
    int counterup = 0, counterdown = 0;
    vect.push_back(start);
    start++;
    while (counterup < a){
      vect.push_back(end);
      end--;
      vect.push_back(start);
      start++;
      counterup++;
    }
    for (int i = start; i <= end; i++){
      vect.push_back(i);
    }
  }
  else if (a < b) {
    vect.push_back(end);
    end--;
    int counterdown = 0;
    while (counterdown < b - 1)
    {
      vect.push_back(start);
      start++;
      vect.push_back(end);
      end--;
      counterdown++;
    }
    for (int i = start; i <= end; i++)
    {
      vect.push_back(i);
    }
  }
  else {
    int counterup = 0;
    vect.push_back(start);
    start++;
    while (counterup < a - 1){
      vect.push_back(end);
      end--;
      vect.push_back(start);
      start++;
      counterup++;
    }
    for (int i = end; i >= start; i--){
      vect.push_back(i);
    }
  }
  for(int i = 0; i < vect.size(); i++){
    cout<<vect[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  fast_cin();
  ll t;
  cin >> t;
  for (int it = 1; it <= t; it++)
  {
    solve();
  }
  return 0;
}