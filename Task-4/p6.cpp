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
    string s, temp1, temp2;
    cin >> s;
    int count = 0, x = stoi(s);
    while (x != 6174)
    {
        if (to_string(x).length() < 4)
            x = x * pow(10, 4 - to_string(x).length());
        temp1 = temp2 = to_string(x);
        sort(temp1.begin(), temp1.end());
        sort(temp2.begin(), temp2.end());
        reverse(temp2.begin(), temp2.end());
        x = abs(stoi(temp1) - stoi(temp2));
        count++;
    }
    cout << count << endl;
}