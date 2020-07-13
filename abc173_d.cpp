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
  vector<ll> A(n);

  rep(i, n)
  {
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  reverse(A.begin(), A.end());
  ll sum = A[0];
  int i = 0;
  int index = 1;
  while (i < n - 2)
  {
    if (i % 2 == 0)
    {
      sum += A[index];
    }
    else
    {
      sum += A[index];
      index++;
    }
    i++;
  }

  cout << sum << endl;

  return 0;
}