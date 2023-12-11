#include <iostream>

using namespace std;

//Напиши програма каде ќе се избројат колку броеви во рангот од 1-100 завршуваат на 6.
//Резултатот да се отпечати.
int main()
{
    int counter = 0;

    for(int i=0; i<100; i++){

        int onesDigit = (i+1)%10;

        if(onesDigit == 6){
            counter++;
        }
    }

    cout<<"The result: "<<counter<<endl;

    return 0;
}
