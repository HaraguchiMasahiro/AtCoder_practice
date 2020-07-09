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
  vector<int> vec(5);
  int sum = 0;
  rep(i, 5)
  {
    int num;
    cin >> num;
    sum += num;
  }
  cout << 15 - sum << endl;
  return 0;
}