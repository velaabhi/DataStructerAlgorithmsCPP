#include<iostream>
using namespace std;

int fact(int n )
{
    if(n==0)        //and factorial of zero is one.
        return 1;
    else
        return fact(n-1)*n;
}

int main()
{
    int a=5;
    cout<<"The factorial of "<<a<<" is "<<fact(a);

    return 0;
}