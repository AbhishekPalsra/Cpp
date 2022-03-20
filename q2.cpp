#include<iostream>

#include<bits/stdc++.h>
// will come back

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
        int y;
        string str; //rotor aaaa
        cin >> str;
        int i = 0;
        int l = str.size();
        string str1;
        string str2;
        if (l % 2 == 0) //gaga
        {
            str1 = str.substr(0,(l / 2) -1);

            str2 = str.substr(l / 2, l - 1);
        }
        else //rotor
        {
            str1 = str.substr(0, (l / 2) - 1);

            str2 = str.substr(l / 2 + 1, l - 1);
        }
          cout<<str1<<endl;
           cout<<str2<<endl;

        for (int i = 0; i < l / 2; i++)
        {
            for (int j = 0; j < l / 2 - 1; j++)
            {
                if (str1[j] > str1[j + 1])
                {
                    int temp = str1[j];
                    str1[j] = str1[j + 1];
                    str1[j + 1] = temp;
                }
            }
        }
        for (int i = 0; i < l / 2; i++)
        {
            for (int j = 0; j < l / 2 - 1; j++)
            {
                if (str2[j] > str2[j + 1])
                {
                    int temp = str2[j];
                    str2[j] = str2[j + 1];
                    str2[j + 1] = temp;
                }
            }
        }

         
         
    }
    return 0;
}
