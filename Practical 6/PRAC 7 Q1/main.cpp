#include <iostream>

using namespace std;
int sod(int num){
    int sum =0;
    while(num>0){
    sum+=num%10;
    num/=10;
    }
    return sum;
}

int main()
{   int sum;
    int num;
    cout<< "enter a number" <<endl;
    cin>>num;
    cout<<"The sum of the digits of "<< num << " is " << sod(num) <<endl;
    return 0;
}
