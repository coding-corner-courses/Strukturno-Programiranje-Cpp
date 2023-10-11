#include <iostream>

using namespace std;

//Задача 20
//Напиши програма каде ќе се внеси еден број преку тастатура
//и ќе се провери дали цифрата на единици е поголема од цифрата на десетки на бројот.
//Резултатот да се отпечати на екран.
int main()
{
    int number;

    cin>>number;

    int onesDigit, tensDigit;

    onesDigit=number%10;

    // Пр. Бројот (355627/10)=35562, 35562%10=2
    tensDigit=(number/10)%10;

    if(onesDigit>tensDigit)
    {
        cout<<"Cifrata na edinici e pogolema od cifrata na desetki na brojot"<<endl;
    }
    else
    {
        cout<<"Cifrata na edinici ne e pogolema od cifrata na desetki na brojot"<<endl;
    }

    return 0;
}
