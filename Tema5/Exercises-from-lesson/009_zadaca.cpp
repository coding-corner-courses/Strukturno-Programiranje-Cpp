#include <iostream>

using namespace std;

//Задача 9.
//Напиши програма која ќе најде степен за даден број. Резултатот треба да се отпечати.
//** Решението треба да биде со помош на рекурзија
//Пр. Бројот 5 на 4-рт степен - 5 * 5 * 5 * 5

int findResult(int base, int exponent)
{

    if(exponent == 0)
    {

        return 1;
    }

    return base * findResult(base, exponent -1);
}

int main()
{
    int n, e;

    cin>>n>>e;

    int result = findResult(n, e);

    cout<<result<<endl;

    return 0;
}
