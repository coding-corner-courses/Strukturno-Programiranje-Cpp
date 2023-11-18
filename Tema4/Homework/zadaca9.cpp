#include <iostream>
#include <cmath>

using namespace std;

//Задача 9
//Напиши програма каде за внесен број преку тастатура ќе се пресмета производ на сите цифри
//кои се наоѓаат во интервалот [4-7]. (Бројот може да има к број на цифри)
//Да се испечати резултатот.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int product = 1;

    while( newNumber != 0){

        int digit = newNumber % 10;

        if(digit >= 4 && digit <= 7){
            product *= digit;
        }

        newNumber = newNumber / 10;
    }

    cout<<product<<endl;

    return 0;
}
