#include <iostream>

using namespace std;

//Задача 18
//Напиши програма каде ќе се внеси еден број преку тастатура
//и ќе се провери дали цифрата на единици е поголема од 4. Резултатот да се отпечати на екран.
int main()
{
    int number;

    cin>>number;

    int onesDigit=number%10;


    if(onesDigit>4)
    {
        cout<<"Cifrata na edinici e pogolema od 4"<<endl;
    }
    else
    {
        cout<<"Cifrata na edinici e pomala ili ednakva na 4"<<endl;
    }

    return 0;
}
