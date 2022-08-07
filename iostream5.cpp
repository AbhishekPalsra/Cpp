#include<bits/stdc++.h>
using namespace std;
class student
{
    public:
    string name;
    int roll;
    string branch;
    friend ofstream & operator(ofstream &ofs,student &s);
};
int main()
{
    student s1;
    s1.name="Abhishek";
    s1.roll=10;
    s1.branch="cs";
    ofstream ofs("student.txt",ios::trunc); // automatically create student .txt file
    ofs<<s1.name<<endl;
    ofs<<s1.roll<<endl;
    ofs<<s1.branch<<endl;
    // ofs<<s1<<endl; how to store a complete object


    
    
    }
