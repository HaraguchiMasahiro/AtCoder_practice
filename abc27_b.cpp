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
    cin >> n;
    vector<int> vec(n + 1);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    if (sum % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        int left = 0, right = 0;
        for (int j = 1; j <= i; j++)
        {
            left += vec[j];
        }
        if (left != (sum / n) * i)
        {
            ans++;
        }
    }
    cout << ans << endl;
}
