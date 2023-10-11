#include <iostream>

using namespace std;

//Задача 19
//Напиши програма каде ќе се внеси еден број преку тастатура
//и ќе се провери дали цифрата на единици е еднаква со цифрата на десетки.
//Резултатот да се отпечати на екран.
int main()
{
    int number;

    cin>>number;

    int onesDigit, tensDigit;

    onesDigit=number%10;

    // Пр. Бројот (355627/10)=35562, 35562%10=2
    tensDigit=(number/10)%10;

    if(onesDigit==tensDigit)
    {
        cout<<"Cifrata na edinici i desetki e ista"<<endl;
    }
    else
    {
        cout<<"Cifrata na edinici i desetki e razlicna"<<endl;
    }

    return 0;
}
