#include <iostream>

using namespace std;

int main()
{
    int num;
    int count,countP =0;
    cout<<"Enter any number"<<endl;
    while(num>-1){
            cin>>num;
            count=0;
    if (num!=0){

    for(int k=1; k<=num; k++){
        if (num %k==0){
                count++;
        }
    }

    if (count == 2 ){
            countP++;
               cout<< num << " is the prime number"<<endl;
               }
               else{
                    cout<< num << " is NOT a prime number"<<endl;}

                }
        }
        cout<<countP<< "prime numbers were entered"<<endl;
 return 0;
}




