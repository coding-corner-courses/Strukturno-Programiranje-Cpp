#include <iostream>
#include <cmath>

using namespace std;

//Задача 11
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Да се отпечати на екран поголемиот од броевите - “Brojot __ e pogolem od brojot __”.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    if(number1>number2)
    {
        cout<<"Brojot "<<number1<<" e pogolem od brojot "<<number2<<endl;
    }
    else
    {
        cout<<"Brojot "<<number2<<" e pogolem od brojot "<<number1<<endl;
    }

    return 0;
}
