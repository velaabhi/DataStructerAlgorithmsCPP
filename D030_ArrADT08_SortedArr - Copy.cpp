#include<iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};


void display(struct Array arr)
{
    for(int i=0;i<arr.length;i++)
        cout<<arr.A[i]<<"  ";
    cout<<endl;
}

int sorted(struct Array arr)
{
    for(int i=0 ; i<arr.length-1 ; i++)
    {
        if(arr.A[i]>arr.A[i+1]) //array sorted in ascending order
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{ 
    struct Array arr1={{1,2,3,4,5},5,5};
    cout<<"The array is ";
    display(arr1);

    int res = sorted(arr1);

    if(res == 1)
        cout<<"Arr is sorted";
    else
        cout<<"Arr is not sorted";
    return 0;
}