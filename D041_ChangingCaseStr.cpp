#include<iostream>
using namespace std;

/*
//1.changing case from UPPER to lower case...
int main()
{
    char A[] = "WELCOME";
    int i;

    for(i=0; A[i] != '\0'; i++)
    {
        A[i] = A[i]+32;
    }

    cout<<A;

    return 0;
}

*/


//2.changing case toggle...
int main()
{
    char A[] = "weLCoMe";
    int i;

    for(i=0; A[i] != '\0'; i++)
    {
        if(A[i] >=65 && A[i] <= 90)
            A[i]+=32;
        else
            A[i]-=32;
    }

    cout<<A;

    return 0;
}