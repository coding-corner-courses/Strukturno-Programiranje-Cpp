#include <iostream>

using namespace std;

//Напиши програма каде ќе се пресмета производ од сите броеви од 1-100 кои завршуваат на 3.
//Резултатот да се отпечати.
int main()
{

    int product = 1;

    for(int i=0; i<100; i++){

        int onesDigit = (i+1)%10;

        if(onesDigit == 3){
            product*=onesDigit;

            cout<<"The number is: "<<i+1<<endl;
        }
    }

    cout<<"The product is: "<<product<<endl;

    return 0;
}
