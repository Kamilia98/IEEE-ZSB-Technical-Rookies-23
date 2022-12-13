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
}
/*
The idea of the insertion sort depends on partitioning the array[n] into n-1 subarrays
and sort each array starting from smaller one by determining the last element as key
and loop through the elememts before it to determine its right place in the array
*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        // Move elements of arr[0..i-1],
        // that are greater than key, to one
        // position ahead of their
        // current position
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
/*
Running time of the insertion sort is O(n^2)
Auxiliary Space of the insertion sort is O(1)
*/

/*
Insertion sort is a stable sorting algorithm.
stable algorithm means that elements with equal values appears in the same order
in the sorted array as in the unsorted array
*/