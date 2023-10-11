#include <iostream>

using namespace std;

//Задача 24
//Да се напиши програма каде ќе биде внесен број преку тастатура (а е [0,5])
//и бројот соодветно треба да се отпечати со букви.
//Пр. За внесен број 1, треба да се отпечати “EDEN”
//За внесен број 4, треба да се отпечати “CETIRI”
int main()
{
    int number;

    cin>>number;

    switch(number){
        case 0:
            cout<<"NULA"<<endl;
            break;
        case 1:
            cout<<"EDEN"<<endl;
            break;
        case 2:
            cout<<"DVA"<<endl;
            break;
        case 3:
            cout<<"TRI"<<endl;
            break;
        case 4:
            cout<<"CETIRI"<<endl;
            break;
        case 5:
            cout<<"PET"<<endl;
            break;
        default:
            cout<<"OTHER"<<endl;
            break;
    }

    return 0;
}
