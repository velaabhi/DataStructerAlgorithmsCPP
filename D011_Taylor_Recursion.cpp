#include<iostream>
using namespace std;

double Taylor(int x, int n)
{
    static double p=1, f=1;
    double r;
    if(n==0)
        return 1;
    else
        r=Taylor(x,n-1);
        p=p*x;
        f=f*n;
        return r+p/f;
}


int main()
{
    int x=2,n=10;
    cout<<"The value of e power "<<x<<" for "<<n<< " no of terms is "<<Taylor(x,n);
    return 0;
}