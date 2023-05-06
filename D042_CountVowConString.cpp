#include<iostream>
using namespace std;

int main()
{
    char A[]="Hey there";
    int i,vcount=0,ccount=0;
    for(i=0;A[i] != '\0';i++)
    {
        if(A[i]=='a' || A[i]=='A'  ||     //for a
        A[i]=='e' || A[i]=='E'   ||    //for e
        A[i]=='i' || A[i]=='I'   ||    //for i
        A[i]=='o' || A[i]=='O'   ||    //for o
        A[i]=='u' || A[i]=='U' )   //for u
            vcount++;

        else if(A[i]>=65 && A[i]<=90  ||     //for consonents
        A[i]>=97 && A[i]<=122   )
            ccount++;
    }
    cout<<"No of vowels is "<<vcount<<endl;
    cout<<"No of consonents is "<<ccount<<endl;

    return 0;
}