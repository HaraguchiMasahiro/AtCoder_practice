#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
const long double PI = (acos(-1));
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int ctoi(char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}
int main()
{
    int h, w;
    cin >> h >> w;
    char b[h + 2][w + 2];
    char a[h][w];
    rep(i, h)
    {
        rep(j, w)
        {
            cin >> a[i][j];
        }
    }
    rep(i, h + 2)
    {
        rep(j, w + 2)
        {
            b[i][j] = '#';
        }
    }
    rep(i, h)
    {
        rep(j, w)
        {
            b[i + 1][j + 1] = a[i][j];
        }
    }
    rep(i, h + 2)
    {
        rep(j, w + 2)
        {
            cout << b[i][j];
        }
        cout << endl;
    }
}