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
    string reversedS = s;
    reverse(reversedS.begin(),reversedS.end());
    if(s==reversedS) cout << "It's Palindrome";
    else cout << "It's not Palindrome";
}