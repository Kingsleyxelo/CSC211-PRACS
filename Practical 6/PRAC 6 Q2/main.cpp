#include <iostream>
using namespace std;
//QUESTION 1

int maximum (int a,int b,int c )
{
if (a>=b && a>=c)
    return a;
    else if (b>=a && b>=c)
    return b;
    else if(c>=a && c>=b)
    return c;
    }
//QUESTION 2
//A function prototype is used to declare the signature of a function, which includes its name(maximum), return type (integer) and parameters(a,b,c)

int maximum (int ,int ,int  )

//QUSETION 3

int main()
{
int a;
int b;
int c;
cout<<"Enter any 3 numbers"<<endl;
cin>>a;
cin>>b;
cin>>c;
cout<<"Maximum number of the given 3 number's is "<< maximum(a,b,c) <<endl;
    return 0;
}




