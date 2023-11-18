#include <iostream>
#include <cmath>

using namespace std;

//Задача 22
//Напиши програма каде ќе внесуваш броеви преку тастатура се додека не внесеш негативен број.
//Изброј колку од внесените броеви се наоѓаат во интервал [10-30].
//Отпечати го резултатот.
int main()
{
    int number;

    cin>>number;

    int sum = 0;

    while(number % 5 != 0)
    {
        sum+=number;

        cin>>number;
    }


    float result = sum *1.0 / 2;

    cout<<result<<endl;


    return 0;
}
