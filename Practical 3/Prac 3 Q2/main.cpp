#include <iostream>

using namespace std;

int main()
{
   int num;
   int sum;
   cout<<"number types"<<endl;
   for(int num=1;num<=1000;++num){
    int sum=0;
    for(int k =1;k<=num;k++){
        if(num%k==0){
        sum=sum+k;
        }
    }
    if (sum==2*num){
        cout<<num<<"is perfect"<<endl;
    }
   }
   return 0;
}
