#include <iostream>

using namespace std;

//Задача 15
//Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најголемиот од броевите - “MAX: __”.
int main()
{
    int number1, number2, number3, number4;

    cin>>number1>>number2>>number3>>number4;

    int maxNumber;

    if(number1>number2 && number1>number3 && number1>number4)
    {
        maxNumber=number1;
    }
    else if(number2>number1 && number2>number3 && number2>number4)
    {
        maxNumber=number2;
    }
    else if(number3>number1 && number3>number2 && number3>number4)
    {
        maxNumber=number3;
    }
    else
    {
        maxNumber=number4;
    }

    cout<<"MAX: "<<maxNumber;

    return 0;
}
