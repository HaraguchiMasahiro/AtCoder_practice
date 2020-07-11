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
  int A[n];
  ll sum = 0;
  map<int, int> map;
  rep(i, n)
  {
    cin >> A[i];
    map[A[i]]++;
    sum += A[i];
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int b, c;
    cin >> b >> c;
    sum += (c - b) * map[b];
    cout << sum << endl;
    map[c] += map[b];
    map[b] = 0;
  }

  return 0;
}