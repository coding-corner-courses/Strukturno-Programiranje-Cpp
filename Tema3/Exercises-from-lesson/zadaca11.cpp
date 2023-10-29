#include <iostream>

using namespace std;

// Задача 11
//Напишете програма каде што за внесен број ќе се провери дали бројот е двоцифрен и дали бројот на десетки е еднаков на 8.
int main()
{
    int number;
    cin>>number;

    int tensDigit = (number%100)/10;

    if(number > 9 && number < 100 && tensDigit == 8)
    {
        cout<<"The tens digit is 8"<<endl;
    }

    return 0;
}
