#include<iostream>
using namespace std;

class Array{
    private:
        int *A;
        int size;
        int length;
    
    public:
        Array(int size){        //Constructor will just declare that array
            this->size=size;    //arrow operator cz its in heap mem
            A = new int[size];
        }   

        void create(){
            length=5;
            for(int i=0;i<5;i++)
                A[i]=10;
            cout<<"Array of "<<length<<" elements is created "<<endl;
        }

        void display(){
            cout<<"The array elements are";
            for(int i=0;i<5;i++)
                cout<<A[i]<<"  ";
            cout<<endl;
        }

        ~Array(){       //destructor
            delete []A;
            cout<<"The array is destroyed !!";
        }

};

int main()
{
    Array arr1(10);
    arr1.create();
    arr1.display();
    return 0;   
}