#include <iostream>

using namespace std;

//Задача 16
//Напиши програма каде преку тастатура ќе може да се внесат четири цели броеви.
//Да се отпечати на екран најмалиот од броевите - “MIN: __”.
int main()
{
    int number1, number2, number3, number4;

    cin>>number1>>number2>>number3>>number4;

    int minNumber;

    if(number1<number2 && number1<number3 && number1<number4)
    {
        minNumber=number1;
    }
    else if(number2<number1 && number2<number3 && number2<number4)
    {
        minNumber=number2;
    }
    else if(number3<number1 && number3<number2 && number3<number4)
    {
        minNumber=number3;
    }
    else
    {
        minNumber=number4;
    }

    cout<<"MIN: "<<minNumber;

    return 0;
}
