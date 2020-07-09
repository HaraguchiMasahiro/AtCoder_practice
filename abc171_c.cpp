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
  ll N;
  cin >> N;
  string s = "";
  for (int i = 1;; i++)
  {
    if (N <= ll(pow(26, i)))
    {
      N--;
      for (int j = 0; j < i; j++)
      {
        s += 'a' + N % 26;
        N /= 26;
      }
      break;
    }
    else
    {
      N -= ll(pow(26, i));
    }
  }
  for (int i = s.length() - 1; i >= 0; i--)
  {
    cout << s[i];
  }
  cout << endl;
  return 0;
}