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
    int k;
    cin >> s >> k;
    if (s.size() < k)
    {
        cout << 0 << endl;
        return 0;
    }
    set<string> st;
    for (int i = 0; i <= s.size() - k; i++)
    {
        st.insert(s.substr(i, k));
    }
    cout << st.size() << endl;
}
