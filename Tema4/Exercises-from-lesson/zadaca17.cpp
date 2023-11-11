#include <iostream>

using namespace std;

//Напши програма каде за внесен број ќе се најде максималната и минималната цифра. (Бројот може да има к цифри)
//Резултатот да се отпечати.
int main()
{

    int number;

    cin>>number;

    int newNumber = number;

    int maxDigit = 0;
    int minDigit = 9;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit > maxDigit)
        {
            maxDigit = digit;
        }

        if(digit < minDigit)
        {
            minDigit = digit;
        }

        newNumber = newNumber /10;
    }

    cout<<"Min: "<<minDigit<<endl;
    cout<<"Max: "<<maxDigit<<endl;

    return 0;
}
