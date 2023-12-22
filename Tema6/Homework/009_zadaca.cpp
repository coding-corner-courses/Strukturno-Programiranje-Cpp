#include <iostream>
using namespace std;

// Задача 9
//Напиши програма каде ќе се внесат две низи од 10 елементи
//и да се определи производот на сумите на вредностите по позиции. Резултатот да се отпечати.

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

int findProduct(int firstArray[], int secondArray[]){

    int product = 1;
    for(int i=0; i<10; i++)
    {
        product*=(firstArray[i]+secondArray[i]);
    }

    return product;
}

int main()
{
    int numbers1[10];
    int numbers2[10];

    fillArray(numbers1, 10);
    fillArray(numbers2, 10);

    int product = findProduct(numbers1, numbers2);

    cout<<"Product: "<<product<<endl;

    return 0;
}
