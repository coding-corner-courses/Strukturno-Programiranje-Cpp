#include <iostream>
#include <cmath>

using namespace std;

//Задача 20
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,b).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.
int main()
{
    int a,b;

    cin>>a>>b;

    float y=sqrt((pow(a,2)+3)/(1+pow(b,3)/a))/(a/pow(b,4)+sqrt(1/(a+b)));

    cout<<"The result is: "<<y<<endl;

    return 0;
}
