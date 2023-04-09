#include<iostream>
#include<cstdlib>   //

using namespace std;

class Array{
    private:
        int *A;     //ptr to array
        int size;
        int length;

    public:
        Array(int size, int length, bool sorted=false)  //constr
        {
            this->size = size;
            this->length = length;

            A = new int[size];

            if(sorted)
            {
                cout<<"Enter elements in sorted manner "<<endl;
                for(int i=0;i<length; i++)
                {
                    cout<<"Enter element "<<i<<" : "<<flush;
                    cin>>A[i];
                }    
            }
            else
            {
                for(int i=0;i<length; i++)
                {
                    int val;
                    val = rand()%100;   //random int in range 0 to 100;

                    ///Generate random binary int and make val negative
                    if(rand()%2)
                        A[i] = -1*val;
                    else
                        A[i] = val;
                }
            }
        }

        int get(int index)
        {
            if(index>=0 && index< length)
                return A[index];
            else
                return -1;
        } 

        int set(int index, int x)
        {
            if(index>=0 && index<length)
                return  A[index]=x; 
        }

        void display()
        {
            for(int i=0; i<length;i++)
                cout<<A[i]<<"   ";
            cout<<endl;
        }
    
        Array Merger(Array& B)  //merge method taking ip arr as ip and return type also arr
        {
            Array C(length +B.length, length + B.length);   //new array C(size, length) created
            int i=0;
            int j=0;
            int k=0;

            while(i<length && j<B.length)
            {
                if(A[i] < B.get(j)) //if ith ele of A is less than jth ele of B then it will 
                    C.set(k++,A[i++]);   //be sent to C arr
                else
                    C.set(k++, B.get(j++));//else  jth ele of B then it will be sent to C arr

            }

            for(;i<length;i++)
                C.set(k++,A[i]);
            
            for(;j<B.length;j++)
                C.set(k++,B.get(j));
            
            return C;
        }
        ~Array(){
                delete[] A;
        }

};

int main()
{
    Array X(10, 5, true);   //both x and y are sorted arr is assumed
    Array Y(10, 4, true);

    Array Z = X.Merger(Y);
    Z.display();    
    return 0;   
}