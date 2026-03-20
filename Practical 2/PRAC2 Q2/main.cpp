#include <iostream>

using namespace std;

int main()
{
cout <<"enter a character(fullstop to finish)"<<endl;
char value;
int counta = 1;
cin>>value;
while(value !='.'){
        cout<<"enter a character(fullstop to finish)"<<endl;
cin>> value;
if (value == 'a')
    counta++;
}
cout<<counta<<" a characters found"<<endl;
return 0;

}
