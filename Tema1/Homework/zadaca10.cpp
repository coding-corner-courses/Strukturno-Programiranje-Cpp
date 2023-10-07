#include <iostream>
#include <cmath>

using namespace std;

//Задача 10
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (r, h).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на екран.
//PI=3.14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата
int main()
{
    int radius, height;

    cin>>radius>>height;

    float PI=3.14;

    float volume=PI*pow(radius,2)*height;

    cout<<"The result is: "<<volume<<endl;

    return 0;
}
