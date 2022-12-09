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
    ll n, temp = 0;
    cin >> n;
    vector<ll> ranked;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (i == 0 || temp != ranked.back())
            ranked.push_back(temp);
    }
    ll m, p = ranked.size() + 1;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        ll input;
        cin >> input;
        while (p > 1 && input >= ranked[p - 2])
            p--;
        cout << p << endl;
    }
}