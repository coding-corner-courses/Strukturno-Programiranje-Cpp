#include <iostream>
#include <cmath>

using namespace std;

//Задача 21
//Напиши програма каде ќе внесуваш броеви преку тастатура се додека не внесеш негативен број.
//Изброј колку од внесените броеви се наоѓаат во интервал [10-30].
//Отпечати го резултатот.
int main()
{
    int number;

    cin>>number;

    int counter = 0;

    while(number > 0)
    {
        if(number >= 10 && number <= 30){
            counter++;
        }

        cin>>number;
    }

    cout<<"Counter: "<<counter<<endl;

    return 0;
}
