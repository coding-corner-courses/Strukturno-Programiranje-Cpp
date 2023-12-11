#include <iostream>
#include <cmath>

using namespace std;

// Да се внесат преку тастура два броеви и да се најде нивниот производ.
// Да се провери дали нивниот производ е делив со 7 и резултатот да се отпечати на екран.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int result = number1 * number2;

    bool isDivisibleWith7 = result % 7 == 0;

    cout<<"The result is: "<<isDivisibleWith7;

    return 0;
}
