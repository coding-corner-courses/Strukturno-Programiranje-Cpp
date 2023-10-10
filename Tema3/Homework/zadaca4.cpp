#include <iostream>

using namespace std;

//Задача 4
//Напиши програма каде преку тастатура ќе може да се внеси цел број. 
//Програмата треба да провери дали бројот завршува со 25. 
//Соодветно да се отпечати “Brojot __ zavrsuva so 25” или “Brojot __ ne zavrsuva so 25”.
int main()
{
    int number;

    cin>>number;

    if(number%100==25)
    {
        cout<<"Brojot "<<number<<" zavrsuva so 25"<<endl;
    }
    else
    {
        cout<<"Brojot "<<number<<" ne zavrsuva so 25"<<endl;
    }

    return 0;
}
