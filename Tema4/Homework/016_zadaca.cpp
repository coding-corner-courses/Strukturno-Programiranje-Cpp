#include <iostream>
#include <cmath>

using namespace std;

//Задача 16
//Напиши програма каде ќе може да се внесат два броеви
//и да се провери дали најголемата цифра од првиот број
//е делива со најмалата цифра од вториот број.
//Резултатот да се отпечати.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int newNumber1 = number1;
    int newNumber2 = number2;
    int maxDigit = 0;
    int minDigit = INT_MAX;

    while( newNumber1 != 0)
    {
        int digit = newNumber1 % 10;

        if(digit>maxDigit)
        {
            maxDigit=digit;
        }

        newNumber1 = newNumber1 / 10;
    }

    while( newNumber2 != 0)
    {
        int digit = newNumber2 % 10;

        if(digit<minDigit)
        {
            minDigit=digit;
        }

        newNumber2 = newNumber2 / 10;
    }

    if(maxDigit % minDigit == 0)
    {
        cout<<"DA"<<endl;
    }
    else
    {
        cout<<"NE"<<endl;
    }

    return 0;
}
