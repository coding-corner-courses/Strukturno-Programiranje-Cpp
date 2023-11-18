#include <iostream>
#include <cmath>

using namespace std;

//Задача 14
//Напиши програма каде за внесен број ќе се проверува дали сумата на цифрите е делива со бројот на цифри.
//Резултатот да се отпечати.
int main()
{
    int n;

    cin>>n;

    int newNumber = n;
    int sum = 0;
    int counter = 0;

    while( newNumber != 0){

        int digit = newNumber % 10;
        sum += digit;
        counter++;

        newNumber = newNumber / 10;
    }

    if(sum % counter == 0){
        cout<<"DA"<<endl;
    }
    else {
        cout<<"NE"<<endl;
    }

    return 0;
}
