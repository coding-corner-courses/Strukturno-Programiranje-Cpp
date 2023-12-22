#include <iostream>
using namespace std;

// Задача 10
//Напиши програма каде ќе се внесат две низи од по 10 елементи
//и ќе се формира нова низа од сумата на елементите по позиции. Отпечати ги трите низи.

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

void fillThirdArray(int firstArray[], int secondArray[], int resultArray[])
{

    for(int i=0; i<10; i++)
    {
        resultArray[i]=firstArray[i]+secondArray[i];
    }
}

void printElements(int numbers[])
{

    for(int i=0; i<10; i++)
    {
        cout<<numbers[i]<<" ";
    }

    cout<<endl;
}

int main()
{
    int numbers1[10];
    int numbers2[10];
    int result[10];

    fillArray(numbers1, 10);
    fillArray(numbers2, 10);

    fillThirdArray(numbers1, numbers2, result);

    printElements(numbers1);
    printElements(numbers2);
    printElements(result);

    return 0;
}
