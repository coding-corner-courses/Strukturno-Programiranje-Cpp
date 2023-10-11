#include <iostream>
#include <cmath>

using namespace std;

//Задача 7
//Напиши програма каде преку тастатура ќе може да се внеси цел број.
//Ако бројот е парен да се пресмета неговиот квадрат, во спротивно да се пресмета неговиот куб.
//Резултатот да се отпечати на екран.
int main()
{
    int number;

    cin>>number;

    int result;

    if(number%2==0)
    {
        result = pow(number,2);
    }
    else
    {
        result = pow(number,3);
    }

    cout<<"The result is: "<<result<<endl;

    return 0;
}
