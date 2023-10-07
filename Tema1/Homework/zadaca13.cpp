#include <iostream>
#include <cmath>

using namespace std;

//Задача 13
//Напиши програма каде што преку тастатура ќе може дасе внесат два броеви (b, h).
//Пронајди ја плоштината (A) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int base, height;

    cin>>base>>height;

    float area=(base*height)/2.0;

    cout<<"The result is: "<<area<<endl;

    return 0;
}
