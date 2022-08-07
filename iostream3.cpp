#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream infile;
    infile.open("my.txt"); // file must exist
    //  if(!infile)
    //  {
    //      cout<<"file cannt be opened"<<endl;

    //  }
    if(!infile.is_open())
    {
        cout<<"file cannot be opened"<<endl;
    }
    string s;
    int x;
    infile>>s;
    infile>>x;
    cout<<s<<" "<<x<<endl;
    if(infile.eof()) cout<<"end of file reached"<<endl;
    infile.close();

}