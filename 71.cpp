#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
   //problems with pointers
   // 1 unitialized pointer ---< intiliazed it first poinnt it somewhere
   // 2 memory leak
   // 3 dangling pointers

// 1
int *p;
//pointer p is not initialised yet! p is storingg a garbage value;
//first intilalied p;
int x=10;
p=&x;
// p direlcy assiggned addresss
// p=(int *)0X5638
p=new int[5];

// 2
// please deallocate heap meomry once not useful
int *p= new int[5];
delete []p; // this is important
p=nullptr;
// 3 
// dangling poointers
void main()
{
    int *p=new int[5];
    




    fun(p); 
    cout<<*p;// fun will be pointing to adress where there is nothing
}
void fun(int *q)
{



    delete []q;
}



      return 0;



}