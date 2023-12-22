#include <iostream>
using namespace std;

// Задача 8
//Напиши програма каде ќе се внесат две низи од по 10 елементи и
//ќе се определи сумата од производите на вредностите по позиции. Резултатот да се отпечати.

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

int findSum(int firstArray[], int secondArray[]){

    int sum = 0;
    for(int i=0; i<10; i++)
    {
        sum+=firstArray[i]*secondArray[i];

    }

    return sum;
}

int main()
{
    int numbers1[10];
    int numbers2[10];

    fillArray(numbers1, 10);
    fillArray(numbers2, 10);

    int sum = findSum(numbers1, numbers2);

    cout<<"Sum: "<<sum<<endl;

    return 0;
}
