#include <iostream>
#include <fstream>
#include<math.h>

using namespace std;

int main()
{
    int num;
    ofstream outfile;
    outfile.open("Q3.text");
    outfile<<"num\tsquare\tsquare root\n";
    for (num=60;num<=100;num++){
        if (num % 2 == 0){
            double square = pow(num,2);
            double square_root = sqrt(num);
            outfile<<num<<"\t"<<"\t"<<square_root<<"\n";
    }
}
outfile.close();
return 0;
}
