#include <bits/stdc++.h>
typedef long long int ll;
// #define endl '\n'
#define NO cout << "NO" << endl
#define YES cout << "YES" << endl
#define Kamilia              \
    ios::sync_with_stdio(0); \
    cin.tie(0), cout.tie(0);
using namespace std;
void func(string input, string random)
{
    int hits = 0, miss = 0;
    for (int i = 0; i < 3; i++)
    {
        if (input[i] == random[i])
        {
            hits++;
            // to solve the problem that the number considered as hit not to be 
            // considered as miss if repeated
            random[i] = 'x';
        }
    }
    cout << random << endl;
    for (int i = 0; i < 3; i++)
    {
        if (random.find(input[i]) != string::npos)
            miss++;
    }
    cout << hits << " hit " << miss << " miss " << endl;
}
int main()
{
    Kamilia;
    srand((unsigned)time(0));
    int random = rand() % 1000, attempts = 0;
    do
    {
        printf("Enter Your Guess: ");
        int input;
        scanf("%d", &input);
        if (input == random)
            break;
        else
            func(to_string(input), to_string(random));
        attempts++;
    } while (true);
    cout << "Game Over, You got it in " << ++attempts << " attempts" << endl;
}