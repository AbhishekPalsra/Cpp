#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
// call byy reference
void swap(int &x,int &y) // x and y acts as a refrences to to x and y in main function
// these x and y are not seperate variable these itself are x and y of main function
// then how its change the values
// in call by refrnece swap code is generated in the main block only instead of seperate genretion
// swap becomes part of main function only when machine code is generated
// swap function is automatically becoome inline fucntion
// when refrence is used inline function
{
    cout<<x<<" "<<y<<endl;
    int temp=x;
    x=y;
    y=temp;
    cout<<x<<" "<<y<<endl;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int x=10;
      int y=20;
      swap(x,y);
      cout<<x<<" "<<y<<endl;







      return 0;



}