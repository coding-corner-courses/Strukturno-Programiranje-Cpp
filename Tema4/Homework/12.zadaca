#include <iostream>
#include <cmath>

using namespace std;

//Задача 12
//Напиши програма каде ќе се внеси број преку тастатура.
//Најди го следниот резултат:
//((збир на парни цифри) + (производ на  непарни цифри))/вкупен број на цифри
//Input: 45986
//((4 + 8 + 6)+(5 * 9))/5
//Output: 12.6
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int counter = 0;
    int sumEvenDigit = 0;
    int productOddDigit = 1;

    while( newNumber != 0){

        int digit = newNumber % 10;
        counter++;

        if(digit % 2 == 0){
            sumEvenDigit += digit;
        } else {
            productOddDigit *= digit;
        }

        newNumber = newNumber / 10;
    }

    float result = (sumEvenDigit + productOddDigit)*1.0/counter;

    cout<<result<<endl;

    return 0;
}
