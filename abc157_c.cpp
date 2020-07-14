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
typedef long long unsigned int ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (int i = 0; i < (n); i++)
// 素因数分解
vector<pair<long long, long long>> prime_factorize(long long n)
{
  vector<pair<long long, long long>> res;
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
int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> sv(m), cv(m);
  rep(i, m)
  {
    cin >> sv[i];
    sv[i]--;
    cin >> cv[i];
  }
  for (int ans = 0; ans <= 999; ans++)
  {
    string s = to_string(ans);
    bool ok = true;
    if (s.length() != n)
    {
      ok = false;
    }
    for (int i = 0; i < m; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (j == sv[i] && (s[j] - '0') != cv[i])
        {
          ok = false;
        }
      }
    }
    if (ok)
    {
      cout << ans << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}