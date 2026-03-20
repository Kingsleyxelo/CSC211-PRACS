#include <iostream>

using namespace std;

int main()
{
    int num =1;
    cout<<"Display all the even numbers between 1 and 50"<<endl;
    while(num<=50)
        {
        if (num%2==0)
        {
            cout<< num << " " <<endl;
        }
        num++;
    }
    return 0;
}
