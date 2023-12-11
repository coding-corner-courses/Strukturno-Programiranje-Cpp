#include <iostream>
#include <cmath>

using namespace std;

// Задача 13
// Напишете програма каде што за внесен број ќе се провери дали бројот е делив со 7,
// ако е делив со 7 да се пресмета неговиот квадрат, ако не е делив да се пресмета неговиот корен.
int main()
{
    int number;
    cin>>number;

    float result;

    if(number % 7 == 0){
        result = pow(number, 2);
    } else{
        result = sqrt(number);
    }

    cout<<"The result is: "<<result;

    return 0;
}
