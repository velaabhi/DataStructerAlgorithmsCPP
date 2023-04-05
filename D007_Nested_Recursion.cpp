#include<iostream>
using namespace std;

//nested recursive func
int fun(int n)
{
    if(n>100)
        return n-10;
    else
        return fun(fun(n+11));
}

int main()
{   
    int x=96;
    cout<<fun(x);

    return 0;
}