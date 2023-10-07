#include <iostream>
#include <cmath>

using namespace std;

//Задача 19
//Напиши програма каде што преку тастатура ќе може да се внесат три броеви (a,b,x).
//Да се пресмета изразот и да се отпечати резултатот (y) на екран.
int main()
{
    int a,b,x;

    cin>>a>>b>>x;

    float y=(pow(a,3)+2/(x+b))/sqrt(5*a+pow(b,2));

    cout<<"The result is: "<<y<<endl;

    return 0;
}
