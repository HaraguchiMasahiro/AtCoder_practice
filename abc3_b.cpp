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
    string s, t;
    cin >> s >> t;
    bool ans = true;
    map<char, int> mp;
    mp['a'] = 1;
    mp['b'] = 0;
    mp['c'] = 1;
    mp['d'] = 1;
    mp['e'] = 1;
    mp['f'] = 0;
    mp['g'] = 0;
    mp['h'] = 0;
    mp['i'] = 0;
    mp['j'] = 0;
    mp['k'] = 0;
    mp['m'] = 0;
    mp['n'] = 0;
    mp['o'] = 1;
    mp['p'] = 0;
    mp['q'] = 0;
    mp['r'] = 1;
    mp['s'] = 0;
    mp['t'] = 1;
    mp['u'] = 0;
    mp['v'] = 0;
    mp['w'] = 0;
    mp['x'] = 0;
    mp['y'] = 0;
    mp['z'] = 0;
    mp['@'] = 10;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[i])
        {
            continue;
        }
        else
        {
            if (mp[s[i]] + mp[t[i]] < 11)
            {
                ans = false;
            }
        }
    }
    if (ans)
    {
        cout << "You can win" << endl;
    }
    else
    {
        cout << "You will lose" << endl;
    }
}