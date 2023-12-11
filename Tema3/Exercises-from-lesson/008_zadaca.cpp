#include <iostream>

using namespace std;

// Задача 8
//Напиши програма каде што преку тастатура ќе биде внесен еден троцифрен број.
//Најди ја цифрата на единици, десетки и стотки и пресметај:
//(бр_единици % бр_стотки) - бр_десетки
//Резултатот отпечати го на екран.
int main()
{
    int number;
    cin>>number;

    //Цифра на единици - 952
    // 952 % 10 -> 2
    int onesDigit = number % 10;

    //Цифра на десетки - 952
    // 952 % 100 -> 52;
    // 52 / 10 -> 5;
    int tensDigit = (number%100) / 10;

    //Цифрата на стотки - 952
    // 952 / 100 -> 9
    int hundreadsDigit = number / 100;

    int result = (onesDigit % hundreadsDigit) - tensDigit;

    cout<<"Result: "<<result;

    return 0;
}
