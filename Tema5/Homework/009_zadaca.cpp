#include <iostream>

using namespace std;

//Задача 9
//Напиши програма која ќе ги брои цифрите на даден број користејќи рекурзивна функција.

int countDigit(int number){

    int newNumber = number / 10;

    if(newNumber == 0 ){
        return 1;
    }

    return 1 + countDigit(newNumber);
}

int main()
{
    int number;

    cin>>number;

    int numberOfDigits = countDigit(number);

    cout<<"Number of digits is: "<<numberOfDigits<<endl;

    return 0;
}
