#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n';
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
ll func(ll input){
    if(input==1) return 1;
    return input*func(input-1);
}
int main()
{
    Kamilia;
    int n;
    cin >> n;
    cout << func(n);
}