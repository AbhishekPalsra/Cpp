#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
  //  ofstream outfile("My.txt"); 
  // if it doesnt exist it will create the files
   // if file contain  already some content it will remove it
   ofstream outfile("My.txt",ios::app); // this will not remove prev content // by default truncate is taken
   outfile<<"Hello"<<endl;
   outfile<<"25"<<endl;
   outfile.close();
}