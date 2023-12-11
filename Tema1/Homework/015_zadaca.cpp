#include <iostream>
#include <cmath>

using namespace std;

//Задача 15
//Напиши програма каде што преку тастатура ќе може да се внеси еден број (x).
//Пронајди го резултатот (y) и отпечати го на екран.
int main()
{
    int x;

    cin>>x;

    float y=11*pow(x, 3)/5 + 12*pow(x,7) -3.5;

    cout<<"The result is: "<<y<<endl;

    return 0;
}
