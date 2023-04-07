#include<iostream>
using namespace std;

int main()
{
    // 1.static array
    int arr1[5]={1,2,3,4,5};
    cout<<arr1[3]<<endl;

    // 2.Dynamic array
    int *p;
    p = new int[5]; //arr does not have own name it is accessed by ptr
    p[0] = 10;
    p[1] = 20;
    p[2] = 30;
    p[3] = 40;
    p[4] = 50;
    cout<<p[2]<<endl;

    return 0;
}