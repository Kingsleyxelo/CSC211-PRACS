#include <iostream>

using namespace std;

int main()
{
//dim the variables//
 int num;
 int sum = 0;
 //we want to print out "number types" when the program runs//
    cout << "Number type"<< endl;
    cout << "-------------" << endl;
    // we start counting from 1 to 30 //
    for (int num=1; num<=30;++num){
        int sum = 0;
        for(int k=1; k<=num;k++){
            // if you divide said number with k and it gives you 0 then sum + said number//
            if(num% k ==0){
                sum=sum+k;
            }
        }
    //if sum is equal to 2 times the said number then the program should print "is perfect"//
    if (sum ==2*num){
        cout<<num<<"is perfect"<<endl;
    }
    //if the sum is greater then 2 times the said number then the program should print "is abundant"//
    else if (sum>2*num){
     cout << num<<"is abundant"<<endl;
    }
    // if the sum is neither perfect or abundant then the program must print deficient//
    else{ cout<<num<<"is deficient"<<endl;
}
}

return 0;
}
