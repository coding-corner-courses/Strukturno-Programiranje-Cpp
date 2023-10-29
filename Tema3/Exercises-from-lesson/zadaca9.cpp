#include <iostream>

using namespace std;

// Задача 9
//Напишете програма која ќе претставува калкулатор и за внесен аритметчки оператор ќе враќа резултат.
// +, - , /, *
int main()
{
    char artitmethicOperator;
    cin>>artitmethicOperator;

    double result;

    int number1, number2;
    cin>>number1>>number2;

    switch(artitmethicOperator)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    default:
        result = 0;
        break;
    }

    cout<<"Result: "<<result;

    return 0;
}
