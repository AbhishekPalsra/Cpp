#include <iostream>
#include <bits/stdc++.h>
using namespace std;
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
        int n, u, d;
        cin >> n >> u >> d;
        int height[n];
        for (int i = 0; i < n; i++)
        {
            cin >> height[i];
        }
        bool para = true;
        int i;
        for (i = 0; i < n - 1; i++)
        {

            if (height[i + 1] > height[i])
            {
                if ((height[i + 1] - height[i]) <= u)
                {
                }
                else
                {
                    break;
                }
            }
            else if (height[i + 1] < height[i])
            {
                if (height[i] - height[i + 1] <= d)
                {
                }
                else
                {
                    if (para)
                    {
                        para = false;
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }
        cout<<i+1<<endl;
    }

    return 0;
}