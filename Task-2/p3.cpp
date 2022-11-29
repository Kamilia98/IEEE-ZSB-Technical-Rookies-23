#include <bits/stdc++.h>
typedef long long int ll;
// #define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    Kamilia;
    string s;
    cin >> s;
    string h = "hello";
    int p = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == h[p])
            p++;
        if (p == 4)
            break;
    }
    if (p == 4)
        YES;
    else
        NO;
}