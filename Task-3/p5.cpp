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
    int n, m, maxi = 0, input = 0;
    cin >> n >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
        cin >> arr[i];
    sort(arr, arr + m);
    for (int i = 0; i < m - 1; i++)
    {
        maxi = max(maxi, arr[i + 1] - arr[i]);
    }
    cout << max(arr[0], max(n - arr[m - 1] - 1, maxi / 2));
}