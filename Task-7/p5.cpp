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
    int d1, d2, m1, m2, y1, y2;
    cin >> d1 >> m1 >> y1 >> d2 >> m2 >> y2;
    if (y1 > y2)
        cout << "10000" << endl;
    else if (y1 == y2)
    {
        if (m1 > m2)
            cout << 500 * (m1 - m2) << endl;
        else if (m1 == m2)
        {
            if (d1 > d2)
                cout << 15 * (d1 - d2) << endl;
            else
                cout << 0 << endl;
        }
        else
            cout << 0 << endl;
    }
    else
        cout << 0 << endl;
}