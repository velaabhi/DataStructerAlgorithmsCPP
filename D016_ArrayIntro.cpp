#include<iostream>
using namespace std;

int main()
{

    // 1. Just Declaration
    int a[10];
    cout<<"a = ";
    for(int i=0;i<=9;i++)
    {
        cout<<a[i]<<endl;
    }

    
    // 2. Declaration and initi
    int b[5]={10,20,30,40,50};
    cout<<"b = ";
    for(int i=0;i<=4;i++)
    {
        cout<<b[i]<<endl;
    }


    // 3. Declaration and any initi -- remaining ele are zero
    float c[5]={1.2,2.4,21.2};
    cout<<"c = ";
    for(int i=0;i<=4;i++)
    {
        cout<<c[i]<<endl;
    }

    
    // 4. no size in Declaration, only initi
    int d[]={10,20,30,40,50,70,40};
    cout<<"d = ";
    for(int i=0;i<=6;i++)
    {
        cout<<d[i]<<endl;
    }

    return 0;
}