#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    for (int i = 0; i < 4; i++) // colums
    {
        for (int j = 0; j < 4; j++) // rows
        {
            if (i >= j)
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    // ****
    //    ***
    //     **
    //      *      
    // %[^\n] for multiple word string , getline(cin,str)
    for (int i = 0; i < 4; i++) // colums
    {
        for (int j = 0; j < 4; j++) // rows
        {
            if (i <= j)
            {
                cout << "*";
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }
    cout << endl;
    // ****
    //   ***
    //   **
    //   *
    for (int i = 0; i < 4; i++) // column
    {
        for (int j = 0; j < 4; j++) //  row
        {
            if (j > i - 1) //
            {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
    //     *
    //    **
    //   ***
    //  ****

    for (int i = 0; i < 4; i++) // column
    {
        for (int j = 0; j < 4; j++) //  row
        {
            if (j + i >= 3) // j+i>=n-1 //
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
   for(int i=0;i<5;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        
        }
        cout<<endl;
    }
    cout<<endl;
     for(int i=0;i<5;i++)
    {
        for(int j=0;j>i;j--)
        {
            cout<<"*";
        
        }
        cout<<endl;
    }
    cout<<endl;
    
    

    

    return 0;
}