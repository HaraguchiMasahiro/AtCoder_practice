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
  vector<int> A(n);
  vector<bool> dp(1000001, true);
  vector<int> b(1000001, 0);
  set<int> set;
  rep(i, n)
  {
    cin >> A[i];
    b[A[i]]++;
    set.insert(A[i]);
  }
  int sum = 0;
  sort(A.begin(), A.end());
  for (int i : set)
  {
    for (int j = 2; j < 1000001; j++)
    {
      if (i * j > 1000001)
      {
        break;
      }
      dp[i * j] = false;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (b[A[i]] == 1 && dp[A[i]]) //同じ数があるだけでそれはだめ。
    {
      sum++;
    }
  }
  cout << sum << endl;
  return 0;
}