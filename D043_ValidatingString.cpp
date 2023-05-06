#include<iostream>
using namespace std;

int main()
{
    char A[]="Hey there12#";
    int i,flag;
    for(i=0;A[i] != '\0';i++)
    {
        if(! (A[i]>=65 && A[i]<=90)
            && !(A[i]>=97 && A[i]<=122)
            && !(A[i]>=48 && A[i]<=56))
            flag=1;
        else
            flag=0;
    }

    if(flag==0)
        cout<<"Validated that its pure string";
    else
        cout<<"Validated that its not pure string, as it has symbols";

    return 0;
}