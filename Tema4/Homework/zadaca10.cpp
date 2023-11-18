#include <iostream>
#include <cmath>

using namespace std;

//Задача 10
//Напиши програма каде за внесен број ќе се провери колку 8-ки има во бројот. (Бројот може да има к број на цифри)
//Да се испечати резултатот.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int count8 = 0;

    while( newNumber != 0){

        int digit = newNumber % 10;

        if(digit == 8){
        count8++;
        }

        newNumber = newNumber / 10;
    }

    cout<<count8<<endl;

    return 0;
}
