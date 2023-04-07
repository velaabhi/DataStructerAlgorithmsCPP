#include<iostream>
using namespace std;

void tailFunc(int a)
{
    if(a==0)
        return;
    else
    {
        cout<<"Hii "<<a<<endl;
        tailFunc(a-1);
    }
}
int main()
{
    int a=3;
    tailFunc(a);
    return 0;
}