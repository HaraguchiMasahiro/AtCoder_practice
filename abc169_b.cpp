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
using namespace std;
typedef long long unsigned int ll;
#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define rep(i, n) for (int i = 0; i < (n); i++)
int main()
{
  int n;
  cin >> n;
  ll sum = 1;
  ll a[100010];
  rep(i, n)
  {
    cin >> a[i];
    if (a[i] == 0)
    {
      cout << 0 << endl;
      return 0;
    }
  }

  rep(i, n)
  {
    if (a[i] <= ll(1e18) / sum)
    {
      sum *= a[i];
    }
    else
    {
      cout << -1 << endl;
      return 0;
    }
  }
  cout << sum << endl;
  return 0;
}