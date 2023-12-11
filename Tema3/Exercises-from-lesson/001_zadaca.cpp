#include <iostream>

using namespace std;

//Напиши програма каде што преку тастатура ќе се чита цел број number.
//Дефинирај блок од изрази и во него дефинирај променлива isEven во која ќе биде запишано дали number е парен број.
//Надвор од дефинираниот блок отпечати ја променливата isEven
//Што се случува во програмата?
int main()
{

    int number;

    cin>>number;

    // Блок од изрази = опсег (scope)
    {
        bool isEven = number % 2 == 0;
    }

    cout<<"Result: "<<isEven<<endl;

    return 0;
}
