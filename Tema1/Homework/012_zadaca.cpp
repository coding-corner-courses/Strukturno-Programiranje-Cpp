#include <iostream>
#include <cmath>

using namespace std;

//Задача 12
//Напиши програма каде што преку тастатура ќе може да се внесе еден број (s).
//Пронајди го волуменот (V) според наведената формула и отпечати го резултатот на екран.
int main()
{
    int side;

    cin>>side;

    int volume=pow(side, 3);

    cout<<"The result is: "<<volume<<endl;

    return 0;
}
