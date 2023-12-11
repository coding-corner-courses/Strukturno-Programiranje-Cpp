#include <iostream>

using namespace std;

//Задача 6
//Направи програма каде што преку тастатура корисникот ќе внеси добитен број (luckyNumber)
//кој подоцна во програмата ќе може да го погоди. Доколку второвнесениот број е еднаков на luckyNumber
//тогаш треба да се отпечати на екран “Congratulations, you’ ve entered the lucky number,
//во спротивно да отпечати “Better luck next time”.
int main()
{
    int luckyNumber, guessNumber;

    cin>>luckyNumber>>guessNumber;

    string message = luckyNumber == guessNumber ? "Congratulations, you' ve entered the lucky number" : "Better luck next time";

    cout<<message<<endl;

    return 0;
}
