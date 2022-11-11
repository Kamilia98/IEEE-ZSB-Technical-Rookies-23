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
    ll n;
    cin >> n;
    ll sum = 0;
    for (int i = 3; i <= n; i++){
        if (i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    cout << sum;
}