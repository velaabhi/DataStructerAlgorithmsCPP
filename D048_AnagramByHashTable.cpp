#include<iostream>
using namespace std;

int main()
{
    char A[] = "decimal";
    char B[] = "medical";

    int i, H[26]={0,0}, flag = 0;

    for(i=0; A[i] != '\0'; i++)
    {
        H[A[i]-97] += 1; 
    }

    for(i=0; B[i] != '\0'; i++)
    {
        H[A[i]-97] -= 1;

        if(H[A[i]-97]>0)
        {
            flag = 1;
            break;
        }
        else
            flag = 0;
            
    }

    if(flag == 0)
        cout<<"Its an anagram";
    else
        cout<<"Its Not an anagram";

    return 0;
}
