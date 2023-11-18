#include <iostream>
#include <cmath>

using namespace std;

//Задача 18
//Напиши програма каде што ќе внесуваш броеви се додека да внесеш негативен број.
//Изброи колку од внесените броеви се парни, најди го минималниот внесен број и
//пресметај производ на сите внесени броеви. Резултатот да се отпечати.
int main()
{
    int number;

    cin>>number;

    int minNumber = number;
    int countEven = 0;
    int product = 1;


    while(number > 0)
    {
        if(number<minNumber){
                minNumber = number;
        }

        product*=number;

        if(number % 2 == 0){
            countEven++;
        }

        cin>>number;
    }


    cout<<"Min: "<<minNumber<<endl;
    cout<<"Product: "<<product<<endl;
    cout<<"Number of even: "<<countEven<<endl;

    return 0;
}
