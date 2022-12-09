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
    int n, k, q;
    cin >> n >> k >> q;
    ll arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    k = k % n;
    int input;
    for (int i = 0; i < q; i++)
    {
        cin >> input;
        if (n + (input - k) < n)
            cout << arr[n + (input - k)] << endl;
        else
        {
            cout << arr[input - k] << endl;
        }
    }
}