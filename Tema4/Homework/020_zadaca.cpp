#include <iostream>
#include <cmath>

using namespace std;

//Задача 20
//Напиши програма каде што ќе можеш да внесуваш броеви се додека да го внесеш бројот 25.
//Пресметај производ од сите внесени броеви деливи со 3 и отпечати го резултатот на екран.
int main()
{
    int number;

    cin>>number;

    int product = 1;

    while(number != 25)
    {
        if(number%3==0){
            product*=number;
        }

        cin>>number;
    }

    cout<<"Product: "<<product<<endl;

    return 0;
}
