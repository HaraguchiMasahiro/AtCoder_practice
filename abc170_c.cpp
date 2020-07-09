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
  int x, n;
  cin >> x >> n;
  vector<int> p(n);
  rep(i, n)
  {
    cin >> p[i];
  }
  for (int i = 0; i <= x; i++)
  {
    for (int j = -1, k = 0; k < 2; j *= (-1), k++)
    {
      int a = x + i * j;
      bool exists = find(begin(p), end(p), a) != end(p);
      if (!exists)
      {
        cout << a << endl;
        return 0;
      }
    }
  }
  return 0;
}