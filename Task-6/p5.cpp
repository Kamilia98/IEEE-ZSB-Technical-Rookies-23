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
    int t;
    cin >> t;
    string x = "hackerrank";
    while (t--)
    {
        string input;
        cin >> input;
        int p = 0;
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == x[p])
                p++;
        }
        if (p >= 10)
            YES;
        else
            NO;
    }
}