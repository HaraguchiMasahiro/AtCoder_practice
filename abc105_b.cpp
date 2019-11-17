#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
const long double PI = (acos(-1));
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int main()
{
    int n;
    cin >> n;
    bool ok = false;
    for (int i = 0; i <= n / 4; i++)
    {
        for (int j = 0; j <= n / 7; j++)
        {
            if (4 * i + 7 * j == n)
            {
                ok = true;
            }
        }
    }
    if (ok)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}