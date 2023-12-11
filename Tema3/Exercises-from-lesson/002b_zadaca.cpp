#include <iostream>

using namespace std;

// Задача 2 - Б
//Доколку е внесен број делив со 38, отпечати “The number is divisible with 38”,
//во спротивно да се отпечати “The number is not divisible with 38”.
int main()
{
    int number;

    cin>>number;

    if(number % 38 == 0){
        cout<<"The number is divisible with 38"<<endl;
    }
    else {
        cout<<"The number is not divisible with 38"<<endl;
    }

    return 0;
}
