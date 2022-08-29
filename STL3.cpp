#include<bits/stdc++.h>
using namespace std;
int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 // vector
    vector<int> v={10,48,9,987};
    v.push_back(6);
    v.push_back(65);
    v.pop_back();
    vector<int>::iterator itr;
    itr=v.begin();
    for(itr;itr!=v.end();itr++)
    {
      cout<<*itr;
    }
  //list
      list<int> v={10,48,9,987};
    v.push_back(6);
    v.push_back(65);
    v.pop_back();
    list<int>::iterator itr;
    itr=v.begin();
    for(itr;itr!=v.end();itr++)
    {
      cout<<*itr;
    }
    //forward list
     forward_list<int> v={10,48,9,987};
    v.push_back(6);
    v.push_back(65);
    v.pop_back();
    vector<int>::iterator itr;
    itr=v.begin();
    for(itr;itr!=v.end();itr++)
    {
      cout<<*itr;
    }










    return 0;
}