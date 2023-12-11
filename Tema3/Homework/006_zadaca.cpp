#include <iostream>

using namespace std;

//Задача 6
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 6 или завршува со цифрата 4.
//Соодветно да се отпечати “Brojot __ e deliv so 6 ili zavrsuva so 4”
//или “Brojot __ ne go ispolnuva uslovot da e deliv so 6 ili da zavrsuva so 4”.
int main()
{
    int number;

    cin>>number;

    if(number%6==0 || number%10==4)
    {
        cout<<"Brojot "<<number<<" e deliv so 6 ili zavrsuva so 4"<<endl;
    }
    else
    {
        cout<<"Brojot "<<number<<" ne go ispolnuva uslovot da e deliv so 6 ili da zavrsuva so 4"<<endl;
    }

    return 0;
}
