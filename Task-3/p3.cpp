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
    int n;
    cin >> n;
    ll capacity[n], sum = 0, remaining = 0;
    for (int i = 0; i < n; i++){
        cin >> remaining;
        sum += remaining;
        cin >> capacity[i];
    }
    sort(capacity, capacity + n);
    if (sum < capacity[n - 1] + capacity[n - 2])
        YES;
    else
        NO;
}