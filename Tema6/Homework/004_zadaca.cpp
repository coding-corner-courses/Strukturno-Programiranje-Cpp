#include <iostream>
using namespace std;

// Задача 4
//Напиши програма каде ќе се внеси низа од 20 природни броеви и ќе се отпечатат по 5 броеви во ред.

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

// Функција која ги печати по 5 елементи во ред
// numbers - низа за која сакаме да ги отпечатиме елементите
// n - должина на низата
void printElements(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {

        cout<<numbers[i]<<" ";

        if(i%5==4)
        {
            cout<<endl;
        }
        else
        {
            cout<<"\t";
        }
    }
}

int main()
{

    int numbers[20];

    fillArray(numbers, 20);

    printElements(numbers, 20);

    return 0;
}
