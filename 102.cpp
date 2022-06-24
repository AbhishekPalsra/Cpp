#include<bits/stdc++.h>
using namespace std;
int main()
{
     #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
      #endif
    char s[100];
    char s2[100];
    // problem with get
    cin.get(s,100); // reads all before enter
    cout<<"welcome"<<" "<<s<<endl;
    cin.ignore(); //ignore extra charcters after reading string 1
    cin.get(s2,100); // reads enter
    cout<<"welcome"<<" "<<s2<<endl;
    return 0;
}