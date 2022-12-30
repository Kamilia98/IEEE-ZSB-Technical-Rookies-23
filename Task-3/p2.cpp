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
    int n;
    cin >> n;
    multimap<double, string> mp;
    set<string> out;
    string name;
    double grade = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> grade;
        mp.insert({grade, name});
    }
    double lowest = mp.begin()->first;
    double val = 0;
    for (auto &itr : mp)
    {
        if (out.empty())
        {
            if (itr.first > lowest)
            {
                out.insert(itr.second);
                val = itr.first;
            }
        }
        else
        {
            if (itr.first == val)
                out.insert(itr.second);
            else
                break;
        }
    }
    for (auto &itr : out)
        cout << itr << endl;
}