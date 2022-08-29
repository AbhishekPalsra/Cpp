#include<bits/stdc++.h>
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    int x=t;
    cin.ignore();
    while(t--)
    {
      string s1,s2;
      getline(cin,s1);
      getline(cin,s2);
      
      bool possibility=true;
      if(s1.length()>s2.length())
      {
        possibility=false;
      }

      else
      {
         string::iterator i,j;
         i=s1.begin();
         j=s2.begin();
         while(i<s1.end() && j<s2.end())
         {
             if(*i==*j)
             {
                 i++;
                 j++;


             }      
             else
             {
                 j++;
             }   
         }

         if(i!=s1.end())
         {
             possibility=false;
         }
       
         
         
          
          
      }

       cout<<"Case #"<<x-t<<": ";
      if(possibility)
      {
          cout<<s2.length()-s1.length()<<endl;
      }
      else{
          cout<<"IMPOSSIBLE"<<endl;
      }
    
    
    
    
   
    
    
    }
   return 0; 
}