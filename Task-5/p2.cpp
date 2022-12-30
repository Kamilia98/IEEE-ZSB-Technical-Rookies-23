#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
bool isValid(string s)
{
    int n = s.length();
    stack<char> st;
    for (char i : s)
    {
        if (i == '[' || i == '{' || i == '(')
            st.push(i);
        else if (i == ']' || i == '}' || i == ')')
        {
            if (st.empty())
                return false;
            else
            {
                if (st.top() == '{' && i == '}' || st.top() == '(' && i == ')' || st.top() == '[' && i == ']')
                    st.pop();
                else
                    return false;
            }
        }
    }
    return st.empty();
}
int main()
{
    Kamilia;
    string input;
    cin >> input;
    if (isValid(input))
        YES;
    else
        NO;
}