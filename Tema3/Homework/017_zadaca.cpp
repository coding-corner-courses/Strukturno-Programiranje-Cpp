#include <iostream>

using namespace std;

//Задача 17
//Напиши програма каде преку тастатура ќе може да се внесат три цели броеви.
//Да се определи разликата помеѓу најголемиот и најмалиот број и да се отпечати на екран резултатот.
int main()
{
    int number1, number2, number3;

    cin>>number1>>number2>>number3;

    int minNumber, maxNumber;

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


    cout<<"Result: "<<maxNumber-minNumber;

    return 0;
}
