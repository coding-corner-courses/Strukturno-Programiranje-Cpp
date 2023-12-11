#include <iostream>
#include <cmath>

using namespace std;

//Напиши програма преку која ќе можеш да внесеш два броеви од тастура и да го најдеш коренот од збирот на нивните квадрати.
//Резултатот отпечати го на екран.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    float result = sqrt(pow(number1,2)+pow(number2,2));

    cout<<"The result is: "<<result;

    return 0;
}
