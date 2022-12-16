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
    string s1, s2, s2Copy;
    cin >> s1 >> s2;
    sort(s1.begin(), s1.begin());
    int len = s1.length();
    for (int i = 0; i <= s2.length() - len; i++)
    {
        s2Copy = s2.substr(i, len);
        sort(s2Copy.begin(), s2Copy.end());
        if (s2Copy == s1)
        {
            YES;
            return 0;
        }
    }
    NO;
}