#include <iostream>

using namespace std;

//Напиши програма каде преку тастатура ќе биде внесен еден број од 1-10 (овој број ќе треба да биде погоден).
//Програмата треба да овозможи внесување на броеви се додека не е внесен бројот кој треба да биде погоден и
//треба да отпечати после колку внесени броени е направен погодок.
//Input: 5 2 4 8 9 0 0 4 6 5
//Оutput: Napraven e pogodok posle 8 obidi.
int main()
{
    int expectedNumber;

    cin>>expectedNumber;

    int number;

    cin>>number;

    int counter = 0;

    while(number != expectedNumber){

        counter++;
        cin>>number;
    }

    cout<<"Napraven e pogodok posle "<<counter<<" obidi"<<endl;

    return 0;
}
