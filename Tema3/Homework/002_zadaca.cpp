#include <iostream>

using namespace std;

//Задача 2
//Напиши програма каде преку тастатура ќе може да се внеси цел број. 
//Програмата треба да провери дали бројот е делив со 61 
//и соодветно да отпечати “Brojot __ e deliv so 61” или “Brojot __ ne e deliv so 61”.
int main()
{
    int number;

    cin>>number;

    if(number%61==0)
    {
        cout<<"Brojot "<<number<<" e deliv so 61"<<endl;
    }
    else
    {
        cout<<"Brojot "<<number<<" ne e deliv so 61"<<endl;
    }

    return 0;
}
