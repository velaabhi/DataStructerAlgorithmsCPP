#include<iostream>
using namespace std;

//Method 1 - using other array.....
/*
int main()
{
    int A[5]={10, 30, 42, 53, 13}, B[5];
    int i,n=5;
    for(i=0; i<n; i++)
    {
        B[i] = A[n-1-i];
        cout<<B[i]<<"   ";
    }
    
    return 0;
}
*/
//2.Method 2- without using other array...
int main()
{
    int A[5]={10, 30, 42, 53, 13} , i=0, j=4, temp;
    while(j>i)
    {
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        j--;
        i++;
    }
    for(i=0;i<5;i++)
    {
        cout<<A[i]<<"   ";
    }
    return 0;
}