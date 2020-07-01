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
  int N, M;
  ll K;
  cin >> N >> M >> K;
  ll A[N], B[M];
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (int i = 0; i < M; i++)
  {
    cin >> B[i];
  }

  ll a[N + 1], b[M + 1];
  a[0] = 0;
  b[0] = 0;
  for (int i = 0; i < N; i++)
  {
    a[i + 1] = a[i] + A[i];
  }
  for (int i = 0; i < M; i++)
  {
    b[i + 1] = b[i] + B[i];
  }
  int ans = 0;
  int j = M;
  for (int i = 0; i < N + 1; i++)
  {
    if (a[i] > K)
    {
      break;
    }
    while (b[j] > K - a[i])
    {
      j--;
    }
    ans = max(ans, i + j);
  }

  cout << ans << endl;
  return 0;
}