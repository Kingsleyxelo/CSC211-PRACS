#include <iostream>

using namespace std;

int main()
{
    int ary[] ={1,2,3,4,5,6};
    int sum =0;
    for (int y=0;y<6;y++){
        sum+=ary[y];
    }
    cout<<" This is the sum of all elements is "<< sum <<endl;
    return 0;

}
