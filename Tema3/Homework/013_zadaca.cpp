#include <iostream>

using namespace std;

//Задача 13
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се отпечати на екран најголемиот од броевите - “MAX: __”.
int main()
{
    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int maxNumber;

    if(number1>number2 && number1>number3)
    {
        maxNumber=number1;
    }
    else if(number2>number1 && number2>number3)
    {
        maxNumber=number2;
    }
    else
    {
        maxNumber=number3;
    }

    cout<<"MAX: "<<maxNumber;

    return 0;
}
