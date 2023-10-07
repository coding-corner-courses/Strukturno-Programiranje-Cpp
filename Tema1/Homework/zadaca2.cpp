#include <iostream>
#include <cmath>

using namespace std;

//Напиши програма каде што преку тастатура ќе може да се внесат два цели броеви.
//Пронајди го нивниот производ и провери дали нивниот производ е делив со бројот 7 или со бројот 13.
//Резултатот отпечати го на екран.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int result = number1 * number2;


    // Бројот е делив со 7 или со 13.
    bool condition = result % 7 == 0 || result % 13 == 0;

    cout<<"The result is divisible with 7 or 13: "<<condition<<endl;

    return 0;
}
