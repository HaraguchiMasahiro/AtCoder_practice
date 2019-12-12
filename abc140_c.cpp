#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); i++)
int main()
{
    int n;
    cin >> n;
    vector<int> vec(n - 1);
    rep(i, n - 1)
    {
        cin >> vec[i];
    }
    int sum = vec[0] + vec[vec.size() - 1];
    for (int i = 0; i < vec.size() - 1; i++)
    {
        int right = vec[i];
        int left = vec[i + 1];
        sum += min(right, left);
    }
    cout << sum << endl;
}