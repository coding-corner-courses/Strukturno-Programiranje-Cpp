#include <iostream>
#include <cmath>

using namespace std;

//Задача 8
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви
//(a, b, h). Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот на екран.

int main()
{
    int a, b, height;

    cin>>a>>b>>height;

    float area=(a*b)/2.0 * height;

    cout<<"The result is: "<<area<<endl;

    return 0;
}
