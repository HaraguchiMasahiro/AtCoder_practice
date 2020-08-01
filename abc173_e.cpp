#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
#include <limits>
using namespace std;
// 素因数分解
typedef pair<long long, long long> P;
vector<P> prime_factorize(long long n)
{
vector<P> res;
for (long long p = 2; p * p <= n; ++p)
{
if (n % p != 0)
continue;
int num = 0;
while (n % p == 0)
{
++num;
n /= p;
}
res.push_back(make_pair(p, num));
}
if (n != 1)
res.push_back(make_pair(n, 1));
return res;
}
// 因数分解
long long gcd(long long x, long long y)
{
  if (y == 0)
  {
    return x;
  }
  else
  {
    return gcd(y, x % y);
  }
}
//素数判定
bool is_prime(long long n){
    if (n <= 1) return false;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p == 0) return false;
    }
    return true;
}
#define MOD 1000000007
typedef long long ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (ll i = 0; i < (n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int main()
{
    int n, k;
    cin >> n >> k;
    vector<ll> m, p;
    rep(i,n){
        int t;
        cin >> t;
        if(t>=0){
            p.push_back(t);
        }else{
            m.push_back(-t);
        }
    }
    sort(m.begin(), m.end());
    sort(p.begin(), p.end());
    if (k == n)
    {
        ll ans = 1;
        rep(i,m.size()){
            ans =ans* (MOD - m[i]) % MOD;
        }
        rep(i,p.size()){
            ans =ans* p[i] % MOD;
        }
        cout << ans << endl;
        return 0;
    }
    if(k%2==1&&m.size()==n){
        ll ans = 1;
        rep(i,k){
            ans =ans* (MOD - m[i]) % MOD;
        }
        cout << ans << endl;
        return 0;
    }

    ll ans = 1;
    ll msize = m.size(),psize=p.size();
    while (k)
    {
        if(k>=2&& msize>=2&&(psize<=1||(psize>=2&& m[msize-1]*m[msize-2]>=p[psize-1]*p[psize-2]))){
            ans =ans* m[--msize] % MOD;
            ans =ans* m[--msize] % MOD;
            k -= 2;
        }else{
            ans =ans* p[--psize] % MOD;
            k--;
        }
    }
    cout << ans << endl;
    return 0;
}