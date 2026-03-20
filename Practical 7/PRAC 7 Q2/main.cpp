#include <iostream>

using namespace std;
int fibo (int num){
if (num<=1){
    return num;
}
 return fibo(num-1)+ fibo(num -2);
}

int main()
{
    int num;
    cout << "Enter the value of num " << endl;
    cin>> num;
    cout<<"The " << num << "th fibonacci number will be " << fibo(num) <<endl;
    return 0;
}
// ADDIND TO NUMBERS BEFORE THE NUMBER YOU PUT STARTING WITH 0 AND 1
