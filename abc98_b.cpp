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
    int n;
    string s;
    cin >> n;
    cin >> s;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        int count = 0;
        for (char c = 'a'; c <= 'z'; c++)
        {
            bool left = false;
            bool right = false;
            for (int j = 0; j < i; j++)
            {
                if (s[j] == c)
                {
                    left = true;
                }
            }
            for (int k = i; k < n; k++)
            {
                if (s[i] == c)
                {
                    right = true;
                }
            }
            if (left && right)
            {
                count++;
            }
        }
        if (ans < count)
        {
            ans = count;
        }
    }
    cout << ans << endl;
}