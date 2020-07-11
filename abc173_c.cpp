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
  int H, W, K;
  cin >> H >> W >> K;
  vector<string> c(H);
  rep(i, H)
  {
    cin >> c[i];
  }
  int sum = 0;
  for (int i = 0; i < (1 << H); i++)
  {
    for (int j = 0; j < (1 << W); j++)
    {
      int cnt = 0;
      for (int h = 0; h < H; h++)
      {
        for (int w = 0; w < W; w++)
        {
          if (i & (1 << h) || j & (1 << w))
          {
            continue;
          }
          else
          {
            if (c[h][w] == '#')
            {
              cnt++;
            }
          }
        }
      }
      if (cnt == K)
      {
        sum++;
      }
    }
  }
  cout << sum << endl;
  return 0;
}