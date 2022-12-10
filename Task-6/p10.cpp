#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
template <typename S>
ostream &operator<<(ostream &os, const vector<S> &vector)
{
    for (auto element : vector)
    {
        os << element << " ";
    }
    return os;
}
int main()
{
    Kamilia;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, input;
        cin >> n >> k;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            vec.push_back(input);
        }
        int p = 0, count = 0;
        while (count < k)
        {
            if (vec[p] < vec[p + 1])
            {
                count++;
                vec.erase(vec.begin() + p);
                p = max(0, p - 1);
            }
            else
                p++;
        }
        cout << vec << endl;
    }
    return 0;
}