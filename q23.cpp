#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int min(int x, int y, int n) // 62 41 150
{
    int arr[4];
     arr[0] = x-1; // 1  // 61
     arr[1] = y-1; // 1  // 40
     arr[2]=  n-x; // 0  // 88
     arr[3] = n-y; // 0  // 
     int minn=0;
     minn=arr[0];
     for(int i=0;i<4;i++)
     {
          
         if(arr[i]<minn)
        
        {
            minn=arr[i];
        }

     }
     return minn;
    
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
        int n, x, y;
        cin >> n >> x >> y;
        int d = min(x,y,n);
        cout << 3 * (n - 1) + 2 * min(x, y, n) << endl;
        // 3* (149)+(2*40)
    }

    return 0;
}