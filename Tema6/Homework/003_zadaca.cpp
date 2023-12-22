#include <iostream>
using namespace std;

// Задача 3
//Напиши програма каде преку тастатура ќе се внеси низа од 20 природни броеви
//и ќе се отпечатат сите елементи кои имаат поголема вредност од својата позиција.

// Функција за внесување на вредности во низа
// numbers - низа во која сакаме да ги внесиме вредностите
// n - должина на низата
void fillArray(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        int number;
        cin>>number;

        numbers[i]=number;
    }
}

// Функција која ги печати сите елементи кои имаат вредност поголема од својата позиција
// numbers - низа за која сакаме да ги отпечатиме елементите
// n - должина на низата
void printElements(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        if(numbers[i]>i)
        {
            cout<<numbers[i]<<" ";
        }
    }

    cout<<endl;
}

int main()
{

    int numbers[20];

    fillArray(numbers, 20);

    printElements(numbers, 20);

    return 0;
}
