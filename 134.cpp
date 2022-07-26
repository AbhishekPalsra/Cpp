#include<iostream>
#include<bits/stdc++.h>
using namespace std;  
#define in 1
#define out 0
// exact number of words in a string
int now(char *str) // passes only adress of 0th index

{
    int count=0;
    int state=out;
    while(*str!='\0')
    {
        if(*str==' ' ||  *str=='\n' || *str=='\t')
        {
            state=out;
        }
        else if(state==out)
        {
            count++;
            state=in;

        }











     str++;
    }

return count;

}
int main()
{
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
      char str[]="one two    three\nfour five sic\t sevem";
      cout<<now(str);



      return 0;



}