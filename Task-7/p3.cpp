#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        multimap<double, vector<int>> mp;
        vector<vector<int>> ans;
        for (int i = 0; i < points.size(); i++)
        {
            mp.insert({sqrt(pow(points[i][0], 2) + pow(points[i][1], 2)), points[i]});
        }
        for (auto itr = mp.begin(); itr != mp.end(); ++itr)
        {
            cout << '\t' << itr->first << '\n';
        }
        auto itr = mp.begin();
        for (int i = 0; i < k && itr != mp.end(); itr++)
        {
            ans.push_back({itr->second});
            i++;
        }
        return ans;
    }
};