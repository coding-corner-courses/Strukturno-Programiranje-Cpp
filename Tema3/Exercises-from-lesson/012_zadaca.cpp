#include <iostream>

using namespace std;

// Задача 12
//Напишете програма каде што за внесен број ќе се провери дали бројот е двоцифрен и дали бројот на единици е еднаков на 1.
int main()
{
    int number;
    cin>>number;

    int onesDigit = number % 10;

    if(number>9 && number < 100 && onesDigit == 1){
        cout<<"The condition is true"<<endl;
    }

    return 0;
}
