#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    // ifstream ifs("my.txt");
    ifstream ifs;
    ifs.open("my.txt");
     if(ifs.is_open())cout<<"file is open"<<endl;
    string name;
    int rollno;
    string branch;
    ifs>>name>>rollno>>branch;
    ifs.close();
    cout<<name<<endl<<rollno<<endl<<branch;
    








}