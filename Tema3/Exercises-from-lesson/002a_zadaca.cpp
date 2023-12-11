#include <iostream>

using namespace std;

// Задача 2 - А
// Напиши програма каде преку тастатура може да се внеси цел број.
// Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”, во спротивно да не се печати ништо.
int main()
{
    int number;

    cin>>number;

    if(number % 38 == 0){
        cout<<"The number is divisible with 38"<<endl;
    }

    return 0;
}
