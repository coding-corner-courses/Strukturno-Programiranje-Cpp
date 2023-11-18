#include <iostream>
#include <cmath>

using namespace std;

//Задача 8
//Напиши програма каде за внесен број преку тастатура ќе се пресмета сумата од сите парни цифри.
//(Бројот може да има к број на цифри)
//Да се испечати резултатот.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int sum = 0;

    while( newNumber != 0){

        int digit = newNumber % 10;

        if(digit % 2 == 0){
            sum += digit;
        }

        newNumber = newNumber / 10;
    }

    cout<<sum<<endl;

    return 0;
}
