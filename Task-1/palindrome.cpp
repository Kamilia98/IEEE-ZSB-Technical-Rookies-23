#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define YES cout << "YES"
#define NO cout << "NO"
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
bool ispalindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
        if (s[i] != s[s.length() - i - 1])
            return 0;
    return 1;
}
int main()
{
    Kamilia;
    ll n;
    cin >> n;
    string str = to_string(n);
    reverse(str.begin(), str.end());
    cout << stoll(str) << endl;
    if (ispalindrome(str))
        YES;
    else
        NO;
}