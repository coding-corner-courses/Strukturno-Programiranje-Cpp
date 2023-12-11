#include <iostream>

using namespace std;

//Задача 14
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: __”.
int main()
{
    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int minNumber;

    if(number1<number2 && number1<number3)
    {
        minNumber=number1;
    }
    else if(number2<number1 && number2<number3)
    {
        minNumber=number2;
    }
    else
    {
        minNumber=number3;
    }

    cout<<"MIN: "<<minNumber;

    return 0;
}
