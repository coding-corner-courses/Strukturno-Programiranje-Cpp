#include <iostream>
#include <cmath>

using namespace std;

//Задача 11
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (r).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на екран.
//PI=3.14 (вредноста за пи зачувај ја во променлива pi и искористи ја во формулата
int main()
{
    int radius;

    cin>>radius;

    float PI=3.14;
    float volume=4/3.0 * PI * pow(radius, 3);

    cout<<"The result is: "<<volume<<endl;

    return 0;
}
