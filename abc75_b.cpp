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
    int X, Y;
    cin >> X >> Y;
    vector<string> board(50);
    rep(i, X)
    {
        cin >> board[i];
    }
    vector<int> dx = {1, 1, 0, -1, -1, -1, 0, 1};
    vector<int> dy = {0, -1, -1, -1, 0, 1, 1, 1};
    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            if (board[i][j] == '.')
            {
                int cnt = 0;
                for (int k = 0; k < 8; k++)
                {
                    int x = i + dx[k];
                    int y = j + dy[k];
                    if (x >= 0 && x < X && y >= 0 && y < Y && board[x][y] == '#')
                    {
                        cnt++;
                    }
                }
                board[i][j] = cnt + '0';
            }
        }
    }
    rep(i, X)
    {
        cout << board[i] << endl;
    }
}