#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
bool isValid(string s)
{
    ll index = s.find("()");
    if (index != string::npos)
    {
        s.erase(index, 2);
        return isValid(s);
    }
    index = s.find("[]");
    if (index != string::npos)
    {
        s.erase(index, 2);
        return isValid(s);
    }
    index = s.find("{}");
    if (index != string::npos)
    {
        s.erase(index, 2);
        return isValid(s);
    }
    return (s.empty());
}
int main()
{
    Kamilia;
    string input;
    cin >> input;
    if (isValid(input))
        YES;
    else
        NO;
}