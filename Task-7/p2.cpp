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
    int lastStoneWeight(vector<int> &stones)
    {
        if (stones.size() > 1)
        {
            sort(stones.begin(), stones.end());
            int temp = abs(stones.back() - stones[stones.size() - 2]);
            stones.pop_back();
            stones.pop_back();
            stones.push_back(temp);
            return lastStoneWeight(stones);
        }
        else if (stones.size() == 1)
            return stones.front();
        else
            return 0;
    }
};