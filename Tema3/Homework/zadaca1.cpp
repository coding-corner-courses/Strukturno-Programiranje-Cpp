#include <iostream>

using namespace std;

//Задача 1
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Програмата треба да провери дали бројот се наоѓа во  интервал од 30 до 50
//и соодветно треба да се отпечати “Brojot __ pripaga na intervalot [30, 50]”.
int main()
{

    int number;

    cin>>number;

    if(number>=30 && number<=50)
    {
        cout<<"Brojot "<<number<<" pripaga na intervalot [30, 50]"<<endl;
    }

    return 0;
}
