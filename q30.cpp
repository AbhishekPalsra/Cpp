#include <iostream>
using namespace std;

int main()
{
    // your code goes here
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
        {
            cout << "YES" << endl;
        }
        else if (a > b)
        {
            bool flag=false;
            while (a > b)
            {
                
                b = b * 2;
                if (a == b)
                {
                    flag=true;
                    cout << "Yes" << endl;

                }
            }
            if(flag==false)
            {
                cout<<"No"<<endl;
            }

        }
        else if (a < b)
        {
            bool flag=false;
            while (b > a)
            {
                a = a * 2;
                if (a == b)
                {
                     flag=true;
                    cout << "Yes" << endl;
                }
            }
               if(flag==false)
            {
                cout<<"No"<<endl;
            }
        }
       
    }
     return 0;
}
