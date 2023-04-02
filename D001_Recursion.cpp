#include<iostream>
using namespace std;

void display(int n){
    if(n>0)             //this is called base condition
    {   
      //  cout<<n<<endl;      //endl means new line  
        cout<<n<<"  ";
        display(n-1);
    }
}

int main()
{
    int n = 10;
    display(n); //diplay funct to be called by passing n as parameter
    return 0;
}