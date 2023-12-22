#include <iostream>
using namespace std;

// Задача 1
//Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви
//и ќе се пресмета збир на сите парни вредности. Резултатот да се отпечати на екран

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

// Функција наоѓање на сумата од парни вредности во низата
// numbers - низа во која сакаме да ги внесиме вредностите 
// n - должина на низата 
int findSumOfEvenValues(int numbers[], int n)
{

    int sum = 0;

    for(int i=0; i<n; i++)
    {

        if(numbers[i]%2==0)
        {
            sum+=numbers[i];
        }
    }

    return sum;
}


int main()
{

    int numbers[10];

    fillArray(numbers, 10);

    int sum = findSumOfEvenValues(numbers, 10);

    cout<<"The sum of the even values is: "<<sum<<endl;

    return 0;
}

