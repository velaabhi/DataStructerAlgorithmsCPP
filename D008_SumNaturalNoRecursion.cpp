#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
        return 0;
    else
        return (sum(n-1)+n);
}

int main()
{
    int a=5;
    cout<<"The sum of natural nos till "<<a<<" is "<<sum(5)<<endl; //using recursion

    int sum1= a*(a+1)/2;        //using formula
    cout<<"Sum of natural nos using formula is "<<sum1;
    return 0;
}