#include <iostream>
using namespace std;

// Задача 12
//Напиши програма каде ќе се внеси низа од 10 елементи и ќе се формираат две нови низи,
//каде што првата низа ќе ги соддржи само елементите кои биле на парни позиции во внесената низа,
//а втората низа ќе ги содржи сите елементи кои биле на непарни позиции. Да се испечатат трите низи.

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

    for(int i=0; i<n-1; i++)
    {

        if(i%2==0)
        {

            int temp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = temp;
        }

    }

    printElements(numbers, n);

    return 0;
}
