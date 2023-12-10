#include <iostream>

using namespace std;

//Задача 10
//Напиши програма која ќе ја наоѓа сумата на цифрите на даден број користејќи рекурзија.

int sumOfDigits(int number){

    int digit = number % 10;
    int newNumber = number / 10;

    if(newNumber == 0 ){
        return digit;
    }

    return digit + sumOfDigits(newNumber);
}

int main()
{
    int number;

    cin>>number;

    int sum = sumOfDigits(number);

    cout<<"Sum of digits is: "<<sum<<endl;

    return 0;
}
