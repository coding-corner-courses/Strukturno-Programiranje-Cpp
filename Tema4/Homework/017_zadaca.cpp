#include <iostream>
#include <cmath>

using namespace std;

//Задача 17
//Напиши програма каде што ќе може да се внесат два броеви
//и да се провери дали сумата од најголемата и најмалата цифра од првиот
//број е еднаква со производот на најмалата и најголемата цифра на вториот број.
//Резултатот да се отпечати.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int newNumber1 = number1;
    int newNumber2 = number2;
    int maxDigit1 = 0;
    int maxDigit2 = 0;
    int minDigit1 = INT_MAX;
    int minDigit2 = INT_MAX;

    while( newNumber1 != 0)
    {
        int digit = newNumber1 % 10;

        if(digit>maxDigit1)
        {
            maxDigit1=digit;
        }

        if(digit<minDigit1)
        {
            minDigit1=digit;
        }

        newNumber1 = newNumber1 / 10;
    }

    while( newNumber2 != 0)
    {
        int digit = newNumber2 % 10;

        if(digit>maxDigit2)
        {
            maxDigit2=digit;
        }

        if(digit<minDigit2)
        {
            minDigit2=digit;
        }

        newNumber2 = newNumber2 / 10;
    }

    int sum = minDigit1 + maxDigit1;
    int product = minDigit2 * maxDigit2;

    if(sum == product)
    {
        cout<<"DA"<<endl;
    }
    else
    {
        cout<<"NE"<<endl;
    }

    return 0;
}
