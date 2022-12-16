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
    int n;
    cin >> n;
    string s;
    map<string, vector<string>> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        string temp = s;
        sort(temp.begin(), temp.end());
        if (mp.count(temp) == 1)
            mp.find(temp)->second.push_back(s);
        else
            mp.insert({temp, {s}});
    }
    for (auto itr = mp.begin(); itr != mp.end(); ++itr)
    {
        for (int i = 0; i < itr->second.size(); i++)
            cout << itr->second[i] << " ";
        cout << endl;
    }
}