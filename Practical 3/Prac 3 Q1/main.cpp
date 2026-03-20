#include <iostream>

using namespace std;

int main()
{
   int num;
int sum=0;
cout<<"Enter the number"<<endl;
cin>>num;
for (int k =1;k<=num;k++){
    if(num%k==0){
    sum =sum+k;
    }
    }
    if (sum ==2*num){
        cout << num<<"is perfect"<<endl;
    }
    else if(sum>2*num){
        cout << num<<"is abundant"<<endl;
    }
    else cout <<num<<"is deficient"<<endl;
    return 0;
}


