#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int fun(int arr[], int n)
{
    int count = 0;
    // 3 3 1 // 3 1 3
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] < arr[i]) //  1 1 1
        {
            count++;
            int c = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = c;
            i=-1; // imp to start from the begining index 0 again 
        }
        if (count > 1)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int x = fun(arr, n);
        if (x == 1)
        {
            cout << "yes" << endl;
        }
        else
        {
            cout << "no" << endl;
        }
    }

    return 0;
}