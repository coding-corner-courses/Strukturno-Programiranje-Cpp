#include <iostream>

using namespace std;

//Задача 5
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот е делив со 3 и завршува со цифрата 5.
//Соодветно да се отпечати “Brojot __ e deliv so 3 i zavrsuva so 5”
//или “Brojot __ ne go ispolnuva uslovot da e deliv so 3 i da zavrsuva so 5”.
int main()
{
    int number;

    cin>>number;

    if(number%3==0 && number%10==5)
    {
        cout<<"Brojot "<<number<<" e deliv so 3 i zavrsuva so 5"<<endl;
    }
    else
    {
        cout<<"Brojot "<<number<<" ne go ispolnuva uslovot da e deliv i da zavrsuva so 5"<<endl;
    }

    return 0;
}
