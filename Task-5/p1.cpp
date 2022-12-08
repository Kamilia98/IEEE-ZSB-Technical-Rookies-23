#include <bits/stdc++.h>
typedef long long int ll;
#define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void Max_Heapify(ll *arr, ll n, ll i)
{
    ll l = 2 * i + 1, r = l + 1, largest = i;
    if (l < n && arr[l] > arr[i])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        Max_Heapify(arr, n, largest);
    }
}
void Build_Max_Heap(ll *arr, ll n)
{
    for (ll i = n / 2; i >= 0; i--)
        Max_Heapify(arr, n, i);
}
int main()
{
    Kamilia;
    printf("Enter the length of the array: ");
    ll n;
    cin >> n;
    ll arr[n];
    printf("Enter the array Elements: ");
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Build_Max_Heap(arr, n);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}