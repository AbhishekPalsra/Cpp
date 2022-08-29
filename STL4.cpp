#include<bits/stdc++.h>
using namespace std;
// replace vector with list 
// program is shifted ffrom vector to list
// witjout changing logic .. only way of storing data change
int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
   vector<int> v={1,8,8,9};
   v.push_back(7);
   v.push_back(456);
   v.pop_back();
   for(int x:v)
   cout<<++x; //  modiying value
    cout<<endl;
    for(int x:v)
    {
        cout<<x++;
    }





    return 0;
}