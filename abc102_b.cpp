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
    vector<int> vec(n);
    rep(i, n)
    {
        cin >> vec[i];
    }
    int MAX = *max_element(vec.begin(), vec.end());
    int MIN = *min_element(vec.begin(), vec.end());
    cout << abs(MAX - MIN) << endl;
}
