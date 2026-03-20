#include <iostream>

using namespace std;

int main()
{
 int num;
 cout<<"Enter a number"<<endl;
 cin>>num;
 int factorial = 1;
 for (int i = num; i>=1;i--)
    {
        factorial*=1;
 }
 cout<<"Factorial of " << num << " = " << factorial << endl;
 return 0;
 }
