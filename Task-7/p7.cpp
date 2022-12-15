#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
    Kamilia;
    int t;
    cin >> t;
    while (t--)
    {
        int n, c, m, x;
        cin >> n >> c >> m;
        int bars = n / c;
        x = bars;
        while (x >= m)
        {
            bars += x / m;
            x -= (x / m) * (m - 1);
        }
        cout << bars << endl;
    }
}