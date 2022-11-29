#include <bits/stdc++.h>
typedef long long int ll;
// #define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;

int main()
{
    Kamilia;
    printf( "Enter the list size: ");
    int n,input;
    cin >> n >> input;
    vector<int> vec;
    vec.push_back(input);
    for(int i=1;i<n;i++){
        cin >> input;
        if(input!=vec.back()) vec.push_back(input);
    }
    for(int i=0;i<vec.size();i++)
        cout << vec[i] << " ";
}