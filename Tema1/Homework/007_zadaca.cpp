#include <iostream>
#include <cmath>

using namespace std;

//Задача 7
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int base, height;

    cin>>base>>height;

    int area=base*height;

    cout<<"The result is: "<<area<<endl;

    return 0;
}
