#include<iostream>
using namespace std;

int C(int n, int r) //implementation  of pascal triangle logic

{
    if (r==0 || n == r)
        return 1;
    else
        return C(n-1,r-1)+C(n-1,r);     
}

int main()
{
    int n=5, r=4;
    cout<<"Value of "<<n<<"C"<<r<<" is "<<C(n,r);
    return 0;
}