#include <iostream>
#include <cmath>

using namespace std;

//Задача 9
//Напиши програма каде што преку тастатура ќе може да се внеси еден бројј (r).
//Пронајди ја плоштината (C) според наведената формула и отпечати го резултатот на екран.
//pi=3.14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата)
int main()
{
    int radius;

    cin>>radius;

    float PI=3.14;
    float c=2*radius*PI;

    cout<<"The result is: "<<c<<endl;

    return 0;
}
