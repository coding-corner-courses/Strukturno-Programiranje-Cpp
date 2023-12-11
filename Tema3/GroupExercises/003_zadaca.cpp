#include <iostream>

using namespace std;

//Задача 3
//Напиши програма каде што преку тастатура ќе бидат внесени три броеви кои треба да претставуваат страни на триаголник.
//Треба да се провери дали може да се конструира триаголик од зададените страни и резултатот треба да се отпечати на екран.
int main()
{
    int side1, side2, side3;

    cin>>side1>>side2>>side3;

    bool condition1 = side1 + side2 > side3;
    bool condition2 = side2 + side3 > side1;
    bool condition3 = side1 + side3 > side2;

    if(condition1 && condition2 && condition3)
    {
        cout<<"The triangle can be constructed!"<<endl;
    }
    else {
        cout<<"The sides cannot construct triangle!"<<endl;
    }

    return 0;
}
