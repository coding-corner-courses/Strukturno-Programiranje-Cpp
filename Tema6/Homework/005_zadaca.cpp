#include <iostream>
using namespace std;

// Задача 5
//Напиши програма каде прелку тастатура ќе се внеси низа од 20 природни броеви
//и ќе се пресмета производот од сите броеви кои се наоѓаат на парна позиција
//и имаат парна вредност и сумата од сите броеви кои се наоѓаат на позиција делива
//со 3 и имаат непарна вредност.  Резултатот да се отпечати.

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

    int numbers[20];

    fillArray(numbers, 20);

    int sum = 0;
    int product = 1;

    for(int i=0; i<20; i++)
    {
        if(i%2==0 && numbers[i]%2==0){

            product *= numbers[i];
        }


        if(i%3==0 && numbers[i]%2==1){

            sum += numbers[i];
        }
    }

    cout<<"The product is: "<<product<<endl;
    cout<<"The sum is: "<<sum<<endl;

    return 0;
}
