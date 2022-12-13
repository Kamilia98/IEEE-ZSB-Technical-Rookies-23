#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
ll addingSquares(ll n)
{
    ll sum = 0;
    while (n != 0)
    {
        sum += pow(n % 10, 2);
        n /= 10;
    }
    return sum;
}
int main()
{
    Kamilia;
    ll input, x;
    cin >> input;
    x = input;
    vector<ll> vec;
    while (true)
    {
        vec.push_back(x);
        x = addingSquares(vec.back());
        if (x == 1 || find(vec.begin(), vec.end(), x) != vec.end())
            break;
    }
    if (x == 1)
        YES;
    else
        NO;
}