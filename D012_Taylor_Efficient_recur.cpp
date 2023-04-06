#include<iostream>
using namespace std;

double Taylor(int x, int n)
{
    static double s=1;
    if(n==0)
        return s;
    else
    {
        s=1+(x*s)/n;
        return Taylor(x, n-1);
    }
}

int  main()
{
    int x=3, n=10;
    cout<<"Value of e power "<<x<<" till "<<n<<" nos of terms is "<<Taylor(x,n);
    return 0;
}