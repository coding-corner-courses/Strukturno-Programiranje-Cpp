#include <iostream>
#include <cmath>

using namespace std;

//Задача 6
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (а).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int sideA;

    cin>>sideA;

    float area=sqrt(3)/4.0 * pow(sideA,2);

    cout<<"The result is: "<<area<<endl;

    return 0;
}
