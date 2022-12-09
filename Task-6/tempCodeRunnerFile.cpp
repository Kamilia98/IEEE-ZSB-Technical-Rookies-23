#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
int main()
{
    Kamilia;
    int n, k, q;
    cin >> n >> k >> q;
    ll arr[n];
    for (int i = 0; i < n; ++i)
        cin >> arr[i];
    k = k % n;