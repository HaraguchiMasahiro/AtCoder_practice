#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
const long double PI = (acos(-1));
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
int main()
{
    string s, t;
    cin >> s >> t;
    bool ans = false;
    for (int i = 0; i < s.size(); i++)
    {
        if (s == t)
        {
            ans = true;
            break;
        }
        s = s[s.size() - 1] + s.substr(0, s.size() - 1);
    }
    if (ans)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}