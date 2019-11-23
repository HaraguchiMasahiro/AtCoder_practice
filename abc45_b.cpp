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
    string sa, sb, sc;
    cin >> sa >> sb >> sc;
    char card = 'a';
    for (int i = 0;; i++)
    {

        if (card == 'a')
        {
            if (sa.empty())
            {
                cout << "A" << endl;
                return 0;
            }
            card = sa[0];
            sa.erase(0, 1);
        }
        else if (card == 'b')
        {
            if (sb.empty())
            {
                cout << "B" << endl;
                return 0;
            }
            card = sb[0];
            sb.erase(0, 1);
        }
        else
        {
            if (sc.empty())
            {
                cout << "C" << endl;
                return 0;
            }
            card = sc[0];
            sc.erase(0, 1);
        }
    }
}
