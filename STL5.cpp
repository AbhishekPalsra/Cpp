#include<bits/stdc++.h>
using namespace std;
int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
  
  // map contain key value pair
  // can store anything here
   map<int,string> m;
   m.insert(pair<int,string>(1,"john"));
     m.insert(pair<int,string>(2,"jhi"));
       m.insert(pair<int,string>(3,"johgbnsn"));
     map<int,string> :: iterator itr;
     for(itr=m.begin();itr!=m.end();itr++)
     {
        cout<<itr->first<<" "<<itr->second<<endl; 
     }
    map<int,string> :: iterator itr1;
    itr1=m.find(2);
    cout<<itr1->first<<" "<<itr1->second;









    return 0;
}