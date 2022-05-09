#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;  // 2
    cin >> t;
    while (t--) // 1
    {
        int n; // 4 
        cin >> n;
        int arr[n]; //  
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i]; // 2 
        }
        sort(arr, arr + n); //  1 1 2 3
        int i=0;
        int j;
        int arrr[n]; // for height 
        int arrrr[n]; // for count
        int k = 0;
       int z;
        for(;i<n;i++) // 0 1 2 3
        { 
            int temp=arr[i]; // 1 
            int count=0;     // 0
            for( j=i;j<n;j++) // 0
            {
                if(arr[j]==temp) //
                {
                    count++; // 2 
                    z=j; //1 
                }
                




            } 
            arrr[k]=temp;  //  1 2 3
            arrrr[k]=count; // 2 1 1
            k++; // 
            i=z; // 1
           
        }
        int fin[k];
        for (int i = 0; i < k; i++)
        {
            fin[i] = arrr[i] + (arrr[i] - 1); //  2 2 3
        }
        int max = fin[0];
        for (int i = 0; i < k; i++)
        {
            if (fin[i] > max)
            {
                max = fin[i];
            }
        }
        cout<<max<<endl;

       
    }

    return 0;
}