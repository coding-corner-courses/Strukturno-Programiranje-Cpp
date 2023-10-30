#include <iostream>
#include <cmath>

using namespace std;

// Задача 14
//Напишете програма каде што ќе може да се внесе број од 1 до 7 и за истиот да се испечати соодветниот ден во неделата.
int main()
{
    int number;
    cin>>number;

    string dayOfWeek;

    switch(number)
    {
    case 1:
        dayOfWeek = "Monday";
        break;
    case 2:
        dayOfWeek ="Tuesday";
        break;
    case 3:
        dayOfWeek ="Wednesday";
        break;
    case 4:
        dayOfWeek= "Thursday";
        break;
    case 5:
        dayOfWeek ="Friday";
        break;
    case 6:
        dayOfWeek ="Saturday";
        break;
    case 7:
        dayOfWeek ="Sunday";
        break;
    default:
        dayOfWeek="Invalid";
    }

    cout<<dayOfWeek;

    return 0;
}
