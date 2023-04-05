#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,n,i;

    cout<<"Enter no of array elements"<<endl;
    cin>>n;

    int *a= new int[n];
    cout<<"Enter "<<n<<" integer elements \n";

    for(i=0; i<n; i++)
        cin>>a[i];
    
    cout<<"displaying i/p array...";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<endl;
        sum=sum+a[i];
    }

    cout<<"Total sum = "<<sum<<endl;
    delete(a);
    getch();
    return 0;
}