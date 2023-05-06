#include<iostream>
using namespace std;

int main()
{
    char A[] = "madam";
    char B[7];
    int i,j, flag=0;

    //length of char A[]
    for(i=0; A[i] != '\0';i++){}
    i=i-1;
    
    for(j=0; i>=0; i--,j++)
    {
           B[j]=A[i];
    }
    B[j] = '\0';

    cout<<"The reversed string is "<<B<<endl;


    for(i=0,j=0; A[i]==B[j]; i++,j++){
        flag = 1;
    }

    if(flag==0)
        cout<<"Str is not palindrome";
    else
        cout<<"Str is palindrome";

    return 0;
}