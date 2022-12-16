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
    int n, x;
    cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vec.push_back(x);
    }
    int p = n - 1;
    while (vec[p] == 9 && p >= 0)
    {
        vec[p] = 0;
        p--;
    }
    if (p <= 0)
        vec.insert(vec.begin(), 1);
    else
        vec[p]++;
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
}