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
    int n, a, b;
    cin >> n >> a >> b;
    int ans = 0;
    rep(i, n)
    {
        string s;
        cin >> s;
        int d;
        cin >> d;
        if (s == "East")
        {
            if (d < a)
            {
                ans += a;
            }
            else if (a <= d && d <= b)
            {
                ans += d;
            }
            else if (b < d)
            {
                ans += b;
            }
        }
        else
        {
            if (d < a)
            {
                ans -= a;
            }
            else if (a <= d && d <= b)
            {
                ans -= d;
            }
            else if (b < d)
            {
                ans -= b;
            }
        }
    }
    if (ans == 0)
    {
        cout << 0 << endl;
    }
    else if (ans > 0)
    {
        cout << "East" << ' ' << abs(ans) << endl;
    }
    else
    {
        cout << "West" << ' ' << abs(ans) << endl;
    }
}