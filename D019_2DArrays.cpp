#include<iostream>
using namespace std;

int main()
{
    //method 1
    int A[3][4];        //arr declaration
    int B[2][3]={{1,2,3},{4,5,6}};


    //method 2 - using ptr
    int *C[2];  //it reflects no of rows - its created in stack mem
    C[0] = new int[3];  //it reflects no of cols        - its created in heap mem
    C[1] = new int[3];

    //method 3 - using double ptr
    int **D;       //its created in stack mem
    D= new int*[2]; //reflects no of rows -  in heap mem
    D[0] = new int[3];  //reflects no of cols -  in heap mem
    D[1] = new int [3];
    return 0;
}