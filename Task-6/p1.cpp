#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
int findDigits(int n)
{
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        if (temp % 10 == 0)
        {
            temp /= 10;
            continue;
        }
        if (n % (temp % 10) == 0)
            count++;
        temp /= 10;
    }
    return count;
}
int main()
{
    Kamilia;
    int t;
    cin >> t;
    while (t--)
    {
        int input;
        cin >> input;
        cout << findDigits(input) << endl;
    }
}