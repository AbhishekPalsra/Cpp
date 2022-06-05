#include<iostream>
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<string>
using namespace std;  
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif // for linking innput and output files

      string name; // string class in cpp
      cout<<"May i know your name?"<<endl;
      cin>>name; // this will read only one word
      cout<<"Welcome miss "<<endl<<name<<endl; 
      cout<<"you are a fool\n";
      





      return 0;


}