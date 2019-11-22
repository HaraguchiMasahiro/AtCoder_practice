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
    int n, m;
    cin >> n >> m;
    vector<int> A(n);
    vector<int> B(n);
    vector<int> C(m);
    vector<int> D(m);
    rep(i, n)
    {
        cin >> A[i];
        cin >> B[i];
    }
    rep(i, m)
    {
        cin >> C[i];
        cin >> D[i];
    }
    for (int i = 0; i < n; i++)
    {
        int mindist = abs(A[i] - C[0]) + abs(B[i] - D[0]);
        int checkp = 1;
        for (int j = 0; j < m; j++)
        {
            int mindistk = abs(A[i] - C[j]) + abs(B[i] - D[j]);
            if (mindistk < mindist)
            {
                mindist = mindistk;
                checkp = j + 1;
            }
        }
        cout << checkp << endl;
    }
}
