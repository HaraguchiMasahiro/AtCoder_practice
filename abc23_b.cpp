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
    cin >> n >> s;
    if (n % 2 == 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int n1 = n - 1;
    string a = "b";
    for (int i = 0;; i++)
    {
        if (n1 > 0)
        {
            a.insert(0, "a");
            a.push_back('c');
            n1 -= 2;
        }
        if (n1 > 0)
        {
            a.insert(0, "c");
            a.push_back('a');
            n1 -= 2;
        }
        if (n1 > 0)
        {
            a.insert(0, "b");
            a.push_back('b');
            n1 -= 2;
        }
        if (n1 == 0)
        {
            break;
        }
    }
    if (a == s)
    {
        cout << (n - 1) / 2 << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}