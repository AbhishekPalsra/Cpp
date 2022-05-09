#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// call by adress
void swap(int *x,int *y) // pointers are used to store adreeses
// x and y are acting as pointers to other x and y in main
{
    cout<<*x<<" "<<*y<<endl;
    int temp=*x;
    *x=*y;
    *y=temp;
    cout<<*x<<" "<<*y<<endl;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
     int x=10;
     int y=20;
     // adress is passed
     swap(&x,&y); // adress of variable
     cout<<x<<" "<<y<<endl;


      return 0;



}