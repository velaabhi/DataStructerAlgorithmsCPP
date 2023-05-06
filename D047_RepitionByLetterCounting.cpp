#include<iostream>
using namespace std;

int main()
{
    char A[] = "pythonp";     //using all small case letters
    int H[26] = {0};         // an arr of 26 size for all alphabets- we will update it when particular alphabet occurs
    int i;

    for(i=0; A[i] != '\0'; i++)
    {
        H[A[i]-97] += 1;
    }

    for(i=0; i<26; i++)
    {
        if(H[i]>1)
            cout<<"Repeating char is "<<char(i+97)<<" which is repeated "<<H[i]<<" times";
        //H[i] gives no of repeatitions
    }

    return 0;
}