#include <iostream>
using namespace std;

// Задача 2
//Напиши програма каде преку тастатура ќе се внеси низа од 10 природни броеви
//и ќе се избројат колку елементи се наоѓаат во интервал [10, 40]. Резултатот да се отпечати.

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

// Функција наоѓање на бројот на вредности во рангот [10, 40]
// numbers - низа која сакаме да ја провериме
// n - должина на низата
int countElements(int numbers[], int n)
{

    int counter = 0;

    for(int i=0; i<n; i++)
    {

        if(numbers[i]>=10 && numbers[i]<=40)
        {
            counter++;
        }
    }

    return counter;
}


int main()
{

    int numbers[10];

    fillArray(numbers, 10);

    int counter = countElements(numbers, 10);

    cout<<"The number of values in range [10, 40]: "<<counter<<endl;

    return 0;
}
