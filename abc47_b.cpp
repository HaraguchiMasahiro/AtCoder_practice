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
    int w, h, n;
    cin >> w >> h >> n;
    int board[h + 1][w + 1];
    rep(i, h + 1)
    {
        rep(j, w + 1)
        {
            board[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int x, y, a;
        cin >> x >> y >> a;
        if (a == 1)
        {
            for (int j = 1; j <= h; j++)
            {
                for (int k = 1; k <= x; k++)
                {
                    board[j][k] = 1;
                }
            }
        }
        else if (a == 2)
        {
            for (int j = 1; j <= h; j++)
            {
                for (int k = x + 1; k <= w; k++)
                {
                    board[j][k] = 1;
                }
            }
        }
        else if (a == 3)
        {
            for (int j = 1; j <= y; j++)
            {
                for (int k = 1; k <= w; k++)
                {
                    board[j][k] = 1;
                }
            }
        }
        else
        {
            for (int j = y + 1; j <= h; j++)
            {
                for (int k = 1; k <= w; k++)
                {
                    board[j][k] = 1;
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            if (board[i][j] == 0)
            {
                ans++;
            }
        }
    }
    cout << ans << endl;
}
