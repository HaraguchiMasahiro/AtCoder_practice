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
    int n, a, b, k;
    cin >> n >> a >> b >> k;
    vector<int> vec(k);
    rep(i, k)
    {
        cin >> vec[i];
    }
    vec.emplace_back(a);
    vec.emplace_back(b);
    sort(vec.begin(), vec.end());
    for (int i = 0; i < k + 1; i++)
    {
        if (vec[i] == vec[i + 1])
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
}
