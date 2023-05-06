#include<iostream>
using namespace std;

int main()
{
    int A[]={8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n=10, i, count, j;

    for(i=0; i<n; i++)
    {
        count =1;
        if(A[i] != -1)
        {
            for(j=i+1; j<n; j++)
            {
                if(A[i] == A[j])
                {
                    count++;    //when duplicate is encountered count is incremented
                    A[j] = -1;  //and that value will made -1 to avoid repeat counting
                }
            }
            if(count>1)
                cout<<"Duplicate values are " <<A[i]<<"   ";
        }
    }
}