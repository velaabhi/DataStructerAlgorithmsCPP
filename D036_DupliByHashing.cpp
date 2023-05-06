#include<iostream>
using namespace std;

int main()
{
    int A[] = {1, 2, 2, 3, 4, 5, 5, 5, 7, 8, 8, 10};
    int n=12, i,j=0,count=0,t;
    int HA[11]={0}; //last elem of A is 10 so +1 i.e. 11 will be size of HA & init to zero
    for(i=0;i<12;i++)
    {
        t=A[i];       //it will go the index coressponding to the value of A[i]
        HA[t] = HA[t]+1;        //and increment it with 1...
    }
    
    

    for(i=0;i<11; i++)
    {
        cout<<HA[i]<<"  ";
    }
    return 0;
}