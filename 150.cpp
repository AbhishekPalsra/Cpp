#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
class student{
  private:
  int rollno;
  string name;
  int mathMarks;
  int phyMarks;
  int chemMarks;
  public:
  // constrcutor
  student(int r,string n,int m,int p,int c)
  {
      rollno=r;
      name=n;
      mathMarks=m;
      phyMarks=p;
      chemMarks=c;

  }
  int total()
  {
      return mathMarks+phyMarks+chemMarks;
  }
  char grade()
  {
     float g=(mathMarks+phyMarks+chemMarks)/3.0;
     if(g>60)
     return 'a';
     else if(g>40)
     return 'b';
     else 
     return 'c';

  }

  

};
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      int r;
      cin>>r;
      string n;
      cin>>n;
      int m,p,c;
      cin>>m>>p>>c;
      student s1(r,n,m,p,c);
      cout<<s1.grade()<<endl;
    //   cout<<s1.name<<endl;





      return 0;



}