#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n';
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
    Kamilia;
    ll a, b;
    cin >> a >> b;
    while (b != 0)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    cout << a;
}