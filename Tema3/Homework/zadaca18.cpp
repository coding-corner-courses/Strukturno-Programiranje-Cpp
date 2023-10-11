#include <iostream>

using namespace std;

//Задача 18
//Напиши програма каде ќе се внеси еден број преку тастатура 
//и ќе се провери дали цифрата на единици е поголема од 4. Резултатот да се отпечати на екран. 
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
