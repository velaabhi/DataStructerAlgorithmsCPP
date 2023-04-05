#include<iostream>
using namespace std;

//indrect means 2 recursive functions call each other in cyclical manner

void A(int);    //function prototypes
void B(int);

//recursive A
void A(int n)
{
    if(n>0)
    {
        cout<<n<<"  ";
        B(n-1);
    }
}

//recursive B
void B(int n)
{
    if(n>1)
    {
        cout<<n<<"  ";
        A(n/2);
    }
}


int main()
{
    int a=20;
    A(20);
    return 0;
}