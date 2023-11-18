#include <iostream>
#include <cmath>

using namespace std;

//Задача 13
//Напиши програма каде ќе се провери дали сумата од цифрите на внесениот број
//е делива со цифрата единици на бројот. Резултатот да се отпечати.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int sum = 0;
    int onesDigit = newNumber % 10;

    while( newNumber != 0){

        int digit = newNumber % 10;
        sum += digit;

        newNumber = newNumber / 10;
    }

    if(sum % onesDigit == 0){
        cout<<"DA"<<endl;
    }
    else {
        cout<<"NE"<<endl;
    }

    return 0;
}
