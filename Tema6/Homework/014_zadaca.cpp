#include <iostream>
using namespace std;

// Задача 14
//Напиши програма каде ќе се внеси низа од n елементи и ќе се направи трансформација
//т.ш местата ќе си ги заменат прв со последен елемент, втор со претпоследен итн. Резултатот да се отпечати.

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

void printElements(int numbers[], int n)
{

    for(int i=0; i<n; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int numbers[n];

    fillArray(numbers, n);

    for(int i=0; i<n/2; i++)
    {
        int temp = numbers[i];
        numbers[i] = numbers[n-i-1];
        numbers[n-i-1] = temp;
    }

    printElements(numbers, n);

    return 0;
}
