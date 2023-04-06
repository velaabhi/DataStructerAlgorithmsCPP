#include<iostream>
using namespace std;

//fib series is 0,1,1,2,3,5,8
//normal method
int fib(int n)
{
    if(n<=1)
        return n;
    else
        return fib(n-2)+fib(n-1);
}


//using Memorization
int F[10];
int mfib(int n)
{
    if(n<=1)
    {
        F[n]=n;
        return 1;
    }
    else
    {
        if(F[n-2]==-1)
            F[n-2]=mfib(n-2);
        
        if(F[n-1]==-1)
            F[n-1]=mfib(n-1);
        
        return F[n-2]+F[n-1];
    }
}




int main()
{
    
for(int i=0;i<10;i++)
{
    F[i]=-1;
}
    int n=5;
    cout<<n<<"th term in fibonacci series using 1st method is "<<fib(n-1)<<endl;
    cout<<n<<"th term in fibonacci series using 2nd method is "<<mfib(n-1)<<endl;
    return 0;
}