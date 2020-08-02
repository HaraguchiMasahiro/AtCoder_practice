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
const int MOD = 1000000007;
typedef long long int ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (int i = 0; i < (n); i++)
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

bool judge(int N,int bit,vector<vector<pair<int, int> > > v){
    for (int i = 0; i < N;i++){
        if(!(bit&(1<<i))){
            continue;
        }
        for(pair<int,int> xy:v[i]){
            int x = xy.first;
            int y = xy.second;
            if(y==1&&!(bit&1<<x)){
                return false;
            }
            if(y==0&&(bit&1<<x)){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int N;
    cin >> N;
    vector<vector<pair<int, int> > > v(N);
    rep(i,N){
        int A;
        cin >> A;
        rep(j,A){
            int x, y;
            cin >> x >> y;
            x--;
            v[i].push_back(make_pair(x, y));
        }
    }
    int res = 0;
    for (int bit = 0; bit < (1 << N);bit++){
        if(judge(N,bit,v)){
            int count = 0;
            for (int i = 0; i < N;i++){
                if(bit&(1<<i)){
                    count++;
                }
            }
            res = max(res, count);
        }
    }
    cout << res << endl;
    return 0;
}