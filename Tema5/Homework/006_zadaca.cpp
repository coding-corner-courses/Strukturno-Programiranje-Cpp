#include <iostream>

using namespace std;

//Задача 6
//Од тастатура се читаат 2 позитивни цели броеви. Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
//Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат на парните позиции од другиот број,
//во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
//For example:
//Input: 12345678 1357
//Result: PAREN
//
//А. Да се направи функција која ќе проверува дали даден број е парен еквивалент на друг број.
//Функцијата да враќа 1 доколку бројот е парен еквивалент, во спротивно да враќа 0.
//Б. Да се направи функција која која ќе го печати резултатот.

int proveriParenEkvivalent(int minNumber, int maxNumber)
{
    int maxNewNumber = maxNumber;
    int minNewNumber = minNumber;


    while(minNewNumber!=0 && maxNewNumber!=0)
    {

        int minDigit = minNewNumber % 10;
        int maxDigit = (maxNewNumber %100)/10;

        minNewNumber = minNewNumber /10;
        maxNewNumber = maxNewNumber /100;

        if(minDigit != maxDigit)
        {
            return 0;
        }
    }

    if(maxNewNumber != 0)
    {
        return 0;
    }

    return 1;
}

void pecatiRezultat(bool parenEkvivalent){

        if(parenEkvivalent==1)
        {
            cout<<"PAREN EKVIVALENT"<<endl;
        }
        else
        {
            cout<<"NE"<<endl;
        }
}

int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int minNumber = number1, maxNumber = number2;

    if(number1<=0 || number2<=0)
    {
        cout<<"Invalid input"<<endl;
    }
    else
    {
        if(number2<number1)
        {
            maxNumber = number1;
            minNumber = number2;
        }

        bool parenEkvivalent =proveriParenEkvivalent(minNumber, maxNumber);
        pecatiRezultat(parenEkvivalent);
    }

    return 0;
}
