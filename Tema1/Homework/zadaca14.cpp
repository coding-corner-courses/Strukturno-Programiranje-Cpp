#include <iostream>
#include <cmath>

using namespace std;

//Задача 14
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a, b).
//Пронајди го резултатот (y) и отпечати го на екран.
int main()
{
    int a, b;

    cin>>a>>b;

    float y=pow(a, 3)/5 + 5*pow(a, 2)/b - 12*b/pow(a,4) + 2.1;

    cout<<"The result is: "<<y<<endl;

    return 0;
}
