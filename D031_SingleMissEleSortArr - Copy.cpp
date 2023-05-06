#include<iostream>
using namespace std;

int main()
{
    int A[]={6,7,8,9,10,12,13,14,15,16,17};
    int lowestIndex = A[0];
    int diff=lowestIndex-0 ; 
    int n = 11;
    for(int i=0; i<n; i++)
    {
        if(A[i]-i != diff)      //sincce diff is constant, thats why we check for elements  
        {                   //where diff is variant 
            cout<< "Missing elem is "<<i+diff;
            break;
        }
    }
    return 0;
}
