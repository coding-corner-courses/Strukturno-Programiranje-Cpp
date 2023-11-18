#include <iostream>
#include <cmath>

using namespace std;

//Задача 23
//Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 55 и определи го најголемиот внесен број.
//Отпечати го резултатот.
int main()
{
    int number;

    cin>>number;

    int maxNumber = number;

    while(number != 55)
    {
        if(maxNumber < number)
        {
            maxNumber = number;
        }

        cin>>number;
    }

    if(number != 55){
    cout<<maxNumber<<endl;
    }

    return 0;
}
