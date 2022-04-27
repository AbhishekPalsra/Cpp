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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (arr[0] % 2 == 0) // 0st elemnt even
        {
            if (arr[1] % 2 == 0) // 1st element even
            {
                int count = 0;
                for (int i = 0; i < n; i++)
                {

                    if (arr[i] % 2 == 0)
                    {
                        count++;
                    }
                }
                if (count == n)
                {
                    cout <<"Yes"<< endl;
                }
                else
                {
                    cout <<"No"<< endl;
                }
            }
            else // 1th odd
            {
                int even = 0;
                int odd = 0;
                for (int i = 0; i < n; i = i + 2)
                {

                    if (arr[i] % 2 == 0)
                    {
                        even++;
                    }
                }
                for (int i = 1; i < n; i = i + 2)

                {
                    if (arr[i] % 2 == 1)
                    {
                        odd++;
                    }
                }
                if (odd + even == n)
                {
                    cout <<"Yes"<< endl;
                }
                else
                {
                    cout<<"no"<<endl;
                }
            }
        }
        else // 1st element  odd
        {

            if (arr[1] % 2 == 0) // 1st element even
            {
                 int even = 0;
                int odd = 0;
                for (int i = 0; i < n; i = i + 2)
                {

                    if (arr[i] % 2 == 1)
                    {
                        odd++;
                    }
                }
                for (int i = 1; i < n; i = i + 2)

                {
                    if (arr[i] % 2 == 0)
                    {
                        even++;
                    }
                }
                if (odd + even == n)
                {
                    cout <<"yes"<< endl;
                }
                else
                {
                    cout<<"no"<<endl;
                }

            }
            else // 1st odd
            {
                int count=0;
                for(int i=0;i<n;i++)
                {
                    if(arr[i]%2==1)
                    { 
                        count++;

                    }
                }
                if(count==n)
                {
                    cout<<"yes"<<endl;
                }
                else
                {
                    cout<<"no"<<endl;
                }

            }
        }
    }

    return 0;
}