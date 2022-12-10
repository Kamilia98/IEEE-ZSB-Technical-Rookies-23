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
    int n, d;
    cin >> n >> d;
    ll arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int result = 0;
    for (int i = 0; i < n; i++)
        result += (find(arr, arr + n, arr[i] + d) != arr + n) && (find(arr, arr + n, arr[i] + 2 * d) != arr + n);
    cout << result << endl;
}