#include <iostream>
#include <cmath>

using namespace std;

//Задача 16
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви (a,x,z).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.
int main()
{
    int a,x,z;

    cin>>a>>x>>z;

    float y=11*pow(a, 2)/pow(a, 3) + pow(x, 3)/sqrt(9*x+0.5);
    cout<<"The result is: "<<y<<endl;

    return 0;
}
