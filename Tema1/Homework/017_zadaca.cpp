#include <iostream>
#include <cmath>

using namespace std;

//Задача 17
//Напиши програма каде што преку тастатура ќе може да се внесат два броеви (a,x).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.
int main()
{
    int a,x;

    cin>>a>>x;

    float y=sqrt((pow(a,x)+2*pow(x,3))/(5*a/x));

    cout<<"The result is: "<<y<<endl;

    return 0;
}
