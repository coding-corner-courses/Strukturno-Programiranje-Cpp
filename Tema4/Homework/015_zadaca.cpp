#include <iostream>
#include <cmath>

using namespace std;

//Задача 15
// Напиши програма каде за внесен број ќе се провери дали бројот е делив со најголемата цифра која ја содржи.
// Резултатот да се отпечати.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int maxDigit = 0;

    while( newNumber != 0)
    {
        int digit = newNumber % 10;

        if(digit>maxDigit)
        {
            maxDigit=digit;
        }

        newNumber = newNumber / 10;
    }

    if(n % maxDigit == 0)
    {
        cout<<"DA"<<endl;
    }
    else
    {
        cout<<"NE"<<endl;
    }

    return 0;
}
