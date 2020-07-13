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
  map<string, int> map;
  rep(i, n)
  {
    string s;
    cin >> s;
    map[s]++;
  }
  cout << "AC x " << map["AC"] << endl;
  cout << "WA x " << map["WA"] << endl;
  cout << "TLE x " << map["TLE"] << endl;
  cout << "RE x " << map["RE"] << endl;
  return 0;
}