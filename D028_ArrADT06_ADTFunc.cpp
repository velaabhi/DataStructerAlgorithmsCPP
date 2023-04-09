#include<iostream>
using namespace std;

// ADT functions - 1.Swap, 2.Get, 3.Set, 4.Max, 5.Min, 6.Sum, 7.Avg
int i;
struct Array{
    int A[10];
    int size;
    int length;
};

void display(struct Array arr)
{
    for(i=0;i<arr.length;i++)
        cout<<arr.A[i]<<"  ";
    cout<<endl;
}

void swap(int *x, int *y)  //since for swapping we need ptr variables
{
    int temp = *x;
    *x=*y;
    *y=temp;
}

int get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)        //checks index is valid or not
        return arr.A[index];
    else
        return -1;
}

void set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)        //checks index is valid or not
        arr->A[index] = x;
}

int max(struct Array arr)
{
    int max=arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]>max)
            max=arr.A[i];
    }
    return max;
}


int min(struct Array arr)
{
    int min= arr.A[0];
    for(i=0;i<arr.length;i++)
    {
        if(arr.A[i]<min)
            min=arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int s=0;
    for(i=0;i<arr.length;i++)
        s=s+arr.A[i];
    return s;
}

float avg(struct Array arr)
{
    return (float)sum(arr)/arr.length;
}

int main()
{
    struct Array arr1={{1,2,3,4,5},5,5};
    cout<<"The array is ";
    display(arr1);
    
    cout<<"\nThe element at index 2 is  "<<get(arr1,2)<<endl;
    
    set(&arr1, 0, 100);
    cout<<"The array after setting 100 at 0th index is ";
    display(arr1);

    cout<<"Max is "<<max(arr1)<<endl;
    
    cout<<"Min is "<<min(arr1)<<endl;
    
    cout<<"Sum is "<<sum(arr1)<<endl;

    cout<<"Average is "<<avg(arr1)<<endl;
    return 0;
}