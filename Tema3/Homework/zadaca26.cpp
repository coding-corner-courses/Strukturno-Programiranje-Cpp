#include <iostream>

using namespace std;

//Задача 26
//Напишете програма каде што ќе може да се внесе број од 1 до 12 кој ќе претставува месец од годината.
//За внесениот месец треба да се отпечати соодветното годишно време.
//Пр. За внесен број 3, треба да се отпечати “SPRING”
int main()
{
    int number;

    cin>>number;

    switch(number)
    {
    case 3:
    case 4:
    case 5:
        cout<<"SPRING"<<endl;
        break;
    case 6:
    case 7:
    case 8:
        cout<<"SUMMER"<<endl;
        break;
    case 9:
    case 10:
    case 11:
        cout<<"AUTUMN"<<endl;
        break;
    case 12:
    case 1:
    case 2:
        cout<<"WINTER"<<endl;
        break;
    default:
        cout<<"The number doesn't represent a month"<<endl;
        break;
    }

    return 0;
}
