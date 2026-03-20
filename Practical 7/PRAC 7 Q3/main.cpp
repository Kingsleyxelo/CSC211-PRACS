#include <iostream>

using namespace std;
bool prime(int num){
if (num<=2){
    return false;
    }
    for (int n = 2; n * n <= num; n++){
        if (num % n == 1){
            return true;
        }
    }
}

int main()
{   int k;
    cout << "Enter a positive integer " << endl;
    cin >> k;
    if (prime(k)){
            cout<< k <<" is a prime number"<<endl;
    }
    else

    {
        cout << k <<" is not a prime number"<<endl;

    }
    return 0;
}
