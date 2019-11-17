#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); i++)
const long double PI = (acos(-1));
using namespace std;
typedef long long ll;
typedef pair<int, int> P;

bool check(string s)
{
    if (s[0] != 'A')
    {
        return false;
    }
    int count = 0;
    for (int i = 2; i < s.length() - 1; i++)
    {
        if (s[i] == 'C')
        {
            count++;
        }
    }
    if (count != 1)
    {
        return false;
    }
    int upper = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            upper++;
        }
    }
    if (upper != 2)
    {
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    if (check(s))
    {
        cout << "AC" << endl;
    }
    else
    {
        cout << "WA" << endl;
    }
}