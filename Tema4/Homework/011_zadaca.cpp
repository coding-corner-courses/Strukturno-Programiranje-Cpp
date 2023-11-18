#include <iostream>
#include <cmath>

using namespace std;

//Задача 11
//Напиши програма каде за внесен број ќе се испечатат во обратен редослед само цифрите кои се деливи со 3.
//Да се испечати резултатот.
//Input: 45983
//Output:39
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int reverseNumber = 0;

    while( newNumber != 0){

        int digit = newNumber % 10;

        if(digit % 3 ==0){
            reverseNumber = reverseNumber*10+digit;
        }

        newNumber = newNumber / 10;
    }

    cout<<reverseNumber<<endl;

    return 0;
}
