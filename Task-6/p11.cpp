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
    int n, t;
    cin >> n >> t;
    int input;
    for (int i = 0; i < n; i++)
    {
        cin >> input;
        t -= (86400 - input);
        if (t <= 0)
        {
            cout << i + 1;
            return 0;
        }
    }
}