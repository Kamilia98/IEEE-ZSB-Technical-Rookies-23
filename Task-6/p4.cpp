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
    int n, m, y = 0, z = 0;
    vector<string> arr;
    cin >> n >> m;
    for (int i = 0; i < n; i++){
        string input;
        cin >> input;
        arr.push_back(input);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int temp = 0;
            for (int k = 0; k < m; k++)
            {
                temp += (arr[i][k] - '0' | arr[j][k] - '0');
            }
            if (temp > y)
            {
                z = 1;
                y = temp;
            }
            else if (temp == y)
                z++;
        }
    }
    cout << y << endl << z << endl;
}