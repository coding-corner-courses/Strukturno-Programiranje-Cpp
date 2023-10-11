#include <iostream>
#include <cmath>

using namespace std;

//Задача 12
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Да се отпечати на екран помалиот од броевите - “Brojot __  e pomal od brojot __”.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int maxNumber;

    if(number1<number2)
    {
        cout<<"Brojot "<<number1<<" e pomal od brojot "<<number2<<endl;
    }
    else
    {
        cout<<"Brojot "<<number2<<" e pomal od brojot "<<number1<<endl;
    }

    return 0;
}
