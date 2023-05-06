#include<iostream>
using namespace std;

int main()
{   
    int A[]={6,7,8,9,11,12,15,16,17,18,19};
    int n=11;
    int diff=A[0]-0;

    for(int i=0;i<n;i++)
    {
        if(A[i]-i != diff)
        {
            while (diff<A[i]-i) //checks how many elem are missing
            {
                cout <<"Missing elem are " <<i+diff<<"   ";
                diff++;         //update diff by 1 when missing ele is found out- it will give 
                            //total no of missing elements...
            }
            
        }
    } 
    return 0;
}