#include<iostream>
using namespace std;
void fun()
{
    static int i=0;
    i++;
    cout<<i<<endl;
}
int main()
{
    
    fun();
    fun();
    fun();

}