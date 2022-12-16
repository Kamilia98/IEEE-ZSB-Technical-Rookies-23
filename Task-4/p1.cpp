#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\/n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    Kamilia;
    ll n, k;
    cin >> n >> k;
    ll arr[n];
    multimap<int, int> x;
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    int count = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            count++;
        else
        {
            x.insert({count, arr[i - 1]});
            count = 1;
        }
    }
    x.insert({count, arr[n - 1]});
    for (auto itr = x.crbegin(); k-- > 0 && itr != x.crend(); ++itr)
        cout << itr->second << '\t';
    // but it's not clear what to do if two numbers has the same frequent and we need to print one of them
}