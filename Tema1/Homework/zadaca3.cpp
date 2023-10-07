#include <iostream>
#include <cmath>

using namespace std;

//Напиши програма каде што преку тастатура ќе може да се внеси цел број. 
//Провери дали бројот е непарен и е делив со 17. Резултатот отпечати го на екран.
int main()
{
    int number;

    cin>>number;

    bool isOddNumber = number%2==1;
    bool isDivisibleWith17 = number%17==0;

    bool condition = isOddNumber && isDivisibleWith17;

    cout<<"The number is odd and divisible with 17 : "<<condition<<endl;

    return 0;
}
