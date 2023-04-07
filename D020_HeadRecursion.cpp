#include<iostream>
using namespace std;

void headFunc(int a)
{
    if(a>0)
    {
        headFunc(a-1);
        cout<<"Hii "<<a<<endl;
    }
    else
        return;
}
int main()
{
    int a=3;
    headFunc(a);

    return 0;
}