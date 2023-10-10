#include <iostream>

using namespace std;

//Задача 3
//Напиши програма каде преку тастатура ќе може да се внеси цел број. 
//Програмата треба да провери дали бројот завршува со цифрата 9. 
//Соодветно да се отпечати “Brojot __ zavrsuva so 9” или “Brojot __ ne zavrsuva so 9”.
int main()
{
    int number;

    cin>>number;

    if(number%10==9)
    {
        cout<<"Brojot "<<number<<" zavrsuva so 9"<<endl;
    }
    else
    {
        cout<<"Brojot "<<number<<"ne zavrsuva so 9"<<endl;
    }

    return 0;
}
