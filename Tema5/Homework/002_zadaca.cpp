#include <iostream>

using namespace std;

//Задача 2
//Напиши програма каде за внесен број ќе се провери дали бројот е делив со најголемата цифра која ја содржи. Резултатот да се отпечати.
//а. Направи функција која ќе ја враќа најголемата цифра од даден број

int getMaximumDigit(int number)
{

    int maximumDigit = 0;
    int newNumber = number;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        if(digit>maximumDigit)
        {
            maximumDigit= digit;
        }

        newNumber = newNumber / 10;
    }

    return maximumDigit;
}

int main()
{
    int n;

    cin>>n;

    int maxDigit = getMaximumDigit(n);

    cout<<"The max digit is: "<<maxDigit<<endl;

    if(n%maxDigit==0)
    {
        cout<<"The number is divisible with max digit"<<endl;
    }
    else
    {
        cout<<"The number is not divisible with max digit"<<endl;
    }

    return 0;
}
