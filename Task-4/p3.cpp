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
    multimap<ll, ll> mp;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp.insert({x, i});
    }
    ll mn = LONG_LONG_MAX;
    for (auto itr = mp.begin(); itr != prev(mp.end()); ++itr)
    {
        if (itr->first == next(itr)->first)
        {
            mn = min(mn, abs(itr->second - next(itr)->second));
        }
    }
    cout << mn << endl;
}