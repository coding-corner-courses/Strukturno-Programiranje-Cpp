#include <iostream>
using namespace std;

// Задача 6
//Напиши програма каде преку тастуатура ќе се внеси низа од n природни броеви.
//Потребно е да се определи полузбирот од сите вредности во низата кои се деливи со 4 и завршуваат на 6.

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

    int sum = 0;

    for(int i=0; i<n; i++)
    {
        if(i%4==0 && numbers[i]%10==6){

            sum += numbers[i];
        }
    }

    cout<<"The half sum is: "<<sum/2.0<<endl;

    return 0;
}
