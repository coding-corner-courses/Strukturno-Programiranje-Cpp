#include <iostream>

using namespace std;

// Задача 10
//Напишете програма каде што за внесен број ќе се провери дали бројот е парен или делив со 5.
int main()
{
    int number;
    cin>>number;

    if(number % 2 == 0 || number % 5 == 0){
        cout<<"The number is even or divisible with 5"<<endl;
    }
    else {
        cout<<"The condition is false"<<endl;
    }

    return 0;
}
