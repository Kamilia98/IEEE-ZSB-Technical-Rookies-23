#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n';
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
ll func1(ll *arr, int n){
    ll sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}
ll func2(ll *arr, int n){
    ll sum = 0;
    while (n--)
        sum += arr[n];
    return sum;
}
ll func3(ll *arr, int n){
    if (n - 1 == 0)
        return arr[0];
    return arr[n - 1] + func3(arr, n - 1);
}
int main()
{
    Kamilia;
    int n;
    cin >> n;
    ll input[n]{0};
    for (int i = 0; i < n; i++)
        cin >> input[i];
    cout << func1(input, n) << endl;
    cout << func2(input, n) << endl;
    cout << func3(input, n) << endl;
}