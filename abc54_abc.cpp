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
    int n, m;
    cin >> n >> m;
    string A[n];
    string B[m];
    rep(i, n)
    {
        cin >> A[i];
    }
    rep(i, m)
    {
        cin >> B[i];
    }

    bool exist = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i + m - 1 >= n or j + m - 1 >= n)
            {
                continue;
            }
            bool match = true;
            for (int y = 0; y < m; y++)
            {
                for (int x = 0; x < m; x++)
                {
                    if (A[i + x][j + y] != B[x][y])
                    {
                        match = false;
                    }
                }
            }
            if (match)
            {
                exist = true;
            }
        }
    }
    if (exist)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
