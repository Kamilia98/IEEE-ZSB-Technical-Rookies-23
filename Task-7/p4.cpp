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
    double grade;
    string name;
    cin >> n;
    multimap<double, string> mp;
    set<string> st;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> grade;
        mp.insert({grade, name});
    }
    double least = mp.begin()->first, target = 0;
    bool targetFlag = false;
    for (auto itr = next(mp.begin()); itr != mp.end(); ++itr)
    {
        if (targetFlag == false && itr->first > least)
        {
            st.insert(itr->second);
            target = itr->first;
            targetFlag = true;
        }
        else if (itr->first == target)
        {
            st.insert(itr->second);
        }
        else
            break;
    }
    for (auto &str : st)
        cout << str << endl;
}