#include <iostream>
using namespace std;
void sumandmulti(int a, int b,int *sum, int *multi){
*sum = a+b;
*multi = a*b;
}

int main()
{
int a = 9, b= 6;
int sum,multi;
sumandmulti(a,b,&sum,&multi);
cout<<"a = 9 and b = 6"<<endl;
cout<<"The sum is "<< sum<<endl;
cout<<"The multi is "<< multi<<endl;
    return 0;
}

// & specifies that a parameter is a reference
// * pointer - a variable meant to store the address of some other variable, thus managing indirection

