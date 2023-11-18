#include <iostream>

using namespace std;

//Задача 24
//Напиши програма каде ќе внесуваш броеви се додека не го внесеш бројот 23.
//Определи го најмалиот внесен број и отпечати го резултатот.
int main()
{
    int number;

    cin>>number;

    int minNumber = number;

    while(number != 23)
    {
        if(minNumber > number)
        {
            minNumber = number;
        }

        cin>>number;
    }

    if(minNumber != 23){
    cout<<minNumber<<endl;
    }

    return 0;
}
