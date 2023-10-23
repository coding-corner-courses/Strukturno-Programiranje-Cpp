#include <iostream>

using namespace std;

//Задача 1
//Напиши програма каде што ќе биде внесен број во рангот [1,12] и отпечати го на екран бројот на денови за тој месец.
//Јануари - 31, Фебруари - 28, Март - 31, Април - 30, Мај - 31, Јуни - 30
//Јули - 31, Август - 31, Септември - 30, Октомври - 31, Ноември - 30, Декември - 31
int main()
{
    int month, daysInMonth;

    cin>>month;

    switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        daysInMonth = 31;
        break;
    case 2:
        daysInMonth = 28;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        daysInMonth = 30;
        break;
    default:
        daysInMonth = 0;
        break;
    }

    daysInMonth != 0 ? (cout<<"The month has "<<daysInMonth<<" days."<<endl) : (cout<<"You have entered number which cannot be mapped to month."<<endl);

    return 0;
}
