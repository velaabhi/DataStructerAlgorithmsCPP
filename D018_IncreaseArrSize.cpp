#include<iostream>
using namespace std;

int main()
{
    int *p,*q;
    p= new int[5];
    q= new int[6];
    for(int i=0;i<5;i++)
        p[i]=10;

    for(int i=0;i<5;i++)
        q[i]=p[i];

    q[5]=20;

    cout<<"p is ";
    for(int i=0;i<5;i++)
        cout<<p[i]<<"  ";

    cout<<"\nq is ";
    for(int i=0;i<6;i++)
        cout<<q[i]<<"  ";

    return 0;
}