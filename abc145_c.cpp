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

vector<int> x(10);
vector<int> y(10);
double dist(int i, int j)
{
    double dx = x[i] - x[j];
    double dy = y[i] - y[j];
    return pow(dx * dx + dy * dy, 0.5);
}
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x[i] >> y[i];
    }
    double sum = 0.0;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        vec[i] = i + 1;
    }
    do
    {
        for (int i = 0; i < n - 1; i++)
        {
            sum += dist(vec[i], vec[i + 1]);
        }
    } while (next_permutation(vec.begin(), vec.end()));
    int factrial = 1;
    for (int i = 2; i <= n; i++)
    {
        factrial *= i;
    }
    cout << fixed << setprecision(10) << sum / factrial << endl;
}