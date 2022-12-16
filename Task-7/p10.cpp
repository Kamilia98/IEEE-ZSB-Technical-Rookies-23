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
    int input[3][3];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> input[i][j];
    for (int i = 0; i < 3; i++)

        for (int j = 0; j < 3; j++)
            cout << !((input[i][j] + ((i == 2) ? 0 : input[i + 1][j]) + ((i == 0) ? 0 : input[i - 1][j]) + ((j == 0) ? 0 : input[i][j - 1]) + ((j == 2) ? 0 : input[i][j + 1])) % 2);
        cout << endl;
    }
}