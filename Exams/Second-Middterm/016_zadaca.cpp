#include<iostream>

using namespace std;

//Задача 16
//Да се напише рекурзивна функција за наоѓање на максималната цифра од даден цел број.
//
//Од стандарден влез се внесуваат непознат број цели броеви се додека не се внесе нешто што не е број.
//За секој од нив да се испечати максималната цифра во посебен ред.
//
//Забелешка: Решението со рекурзивна функција носи 100% од поените, а со нерекурзивна функција 70% од поените.
//
//Забелешка: ЗАБРАНЕТО е користење на глобални променливи.

int findMax(int number, int maxDigit)
{

    if(number == 0)
    {
        return maxDigit;
    }

    int digit = number % 10;
    int newMaxDigit = digit > maxDigit ? digit : maxDigit;

    return findMax(number/10, newMaxDigit);
}

int main()
{
    int number;

    while(cin>>number)
    {
        int maxDigit = findMax(number, 0);

        cout<<maxDigit<<endl;

    }

    return 0;
}
