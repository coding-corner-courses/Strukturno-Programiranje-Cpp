#include <iostream>
#include <cmath>

using namespace std;

//Задача 9
//Напиши програма каде преку тастатура ќе може да се внесат два цели броеви.
//Ако двата броеви се се деливи со 3 да се пресмета корен од нивниот производ,
//во спротивно да се пресмета сума од нивните корени.
//Резултатот да се отпечати на екран.
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    double result;

    if(number1%3==0 && number2%3==0)
    {
        result = sqrt(number1*number2);
    }
    else
    {
        result = sqrt(number1) + sqrt(number2);
    }

    cout<<"The result is: "<<result<<endl;

    return 0;
}
