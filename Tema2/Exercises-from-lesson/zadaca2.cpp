#include <iostream>
#include <iomanip>

using namespace std;

//Задача 2
//Направи програма каде што преку тастатура ќе се внесат два цели броеви
//и ќе се пронајде нивниот количник. Отпечати го резултатот.

//За форматирање на децимален број се користи
//cout << fixed << setprecision(n) << float_variable


int main()
{

    int number1, number2;

    cin>>number1>>number2;

    double result = number1 / (double)number2;

    cout<<"The result is: ";
    cout<<fixed<<setprecision(2)<<result;

    return 0;
}
