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
    string s;
    int t;
    cin >> s >> t;
    int x = 0, y = 0, k = 0;
    for (auto c : s)
    {
        if (c == 'L')
        {
            x--;
        }
        else if (c == 'R')
        {
            x++;
        }
        else if (c == 'U')
        {
            y++;
        }
        else if (c == 'D')
        {
            y--;
        }
        else
        {
            k++;
        }
    }
    if (t == 1)
    {
        cout << abs(x) + abs(y) + k << endl;
    }
    else
    {
        int left = (s.size() % 2);
        int right = abs(x) + abs(y) - k;
        int ans = max(left, right);
        cout << ans << endl;
    }
}
