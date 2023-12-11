#include <iostream>

using namespace std;

//Да се провери дали одреден внесен шестцифрен број е симетричен.
//Тоа значи првата цифра од бројот да е еднаква со последната, втората цифра со претпоследната..
//Пример за симетрични броеви: 123321, 805508, 999999.
//Да се испечати 1 ако бројот е симетричен, 0 ако не е симетричен.
int main()
{
    int number;

    cin>>number;

    int reversedNumber = 0;

    int newNumber = number;

    while(newNumber != 0)
    {

        int digit = newNumber % 10;

        reversedNumber = reversedNumber *10 + digit;

        newNumber= newNumber/10;
    }

    if(number == reversedNumber)
    {

        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }

    return 0;
}
