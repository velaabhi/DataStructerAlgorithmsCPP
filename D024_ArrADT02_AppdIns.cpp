#include<iostream>
using namespace std;

struct Array{
        int A[10];
        int size;
        int length;
};

void display(struct Array arr)
{
    cout<<"The array elements are ";
    for(int i=0; i<arr.length; i++)
        cout<< arr.A[i] <<"  ";
}

void append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
        arr->A[arr->length] = x;
        arr->length++;
}

void insert(struct Array *arr, int index, int x)
{
        if(index>0 && index < arr->length)
        {
            for(int i=arr->length; i>index; i--)
            {
                 arr->A[i] = arr->A[i-1];
            }
        }
        arr->A[index] = x;
        arr->length++;
}

int main()
{
    struct Array arr1 ={{1,2,3,4,5}, 10, 5};
    cout<<"Array displaying ";
    display(arr1);

    append(&arr1,100);
    cout<<"\nArray displaying after appending 100 ";
    display(arr1);

    insert(&arr1,0,200);
    cout<<"\nArray displaying after inserting 200 at 0th index ";
    display(arr1);


    return 0;
}