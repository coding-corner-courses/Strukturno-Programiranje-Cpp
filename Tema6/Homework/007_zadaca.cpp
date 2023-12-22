#include <iostream>
using namespace std;

// Задача 7
//Напиши програма каде преку тастатура ќе се внеси низа од n природни броеви.
//Потребно е да се најде максималниот елемент и неговата позиција во низата
//и минималниот елемент и неговата позиција  во низата. Резултатот да се отпечати.

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

int main()
{

    int n;
    cin>>n;
    int numbers[n];

    fillArray(numbers, n);

    int maxElement = numbers[0];
    int maxElementIndex = 0;
    int minElement = numbers[0];
    int minElementIndex=0;

    for(int i=0; i<n; i++)
    {
        if(maxElement < numbers[i]){
            maxElement = numbers[i];
            maxElementIndex = i;
        }

        if(minElement > numbers[i]){
            minElement = numbers[i];
            minElementIndex = i;
        }
    }

    cout<<"Min element: "<<minElement<<endl;
    cout<<"Min element position: "<<minElementIndex<<endl;
    cout<<"Max element: "<<maxElement<<endl;
    cout<<"Max element position: "<<maxElementIndex<<endl;

    return 0;
}
