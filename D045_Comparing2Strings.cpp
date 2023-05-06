#include<iostream>
using namespace std;

int main()
{
    char A[]="Java";
    char B[]="Python";

    int i,j;

    for(i=0,j=0; A[i] != '\0' && B[i] != '\0'; i++, j++)
    {
        if(A[i] != B[j])
            break;
    }
    
    if(A[i] == B[j])
        cout<<"Both equal";
    else if(A[i] > B[j])
        cout<<"Str A is Greater ";
    else
        cout<<"Str B is Greater";

    return 0;
}