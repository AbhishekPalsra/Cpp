#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
void display()
{
    cout<<"hello"<<endl;

}
int main()
// pointer to a function
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    
    //  display();
    // way to declare function pointer
    // dec of pointers
    void (*fp)(); // must be enclosed in a bracket
    fp=display;
    (*fp)();



      return 0;



}