#include <iostream>

using namespace std;

//Задача 5.
//Од тастатура се читаат 2 позитивни цели броеви.
//Доколку се внесе барем еден негативен број или 0 треба да се печати „Invalid input“.
//Треба да се определи дали помалиот број “е парен еквивалент” од поголемиот број.
//Еден број “е парен еквивалент” на друг број, ако и само ако неговите цифри се наоѓаат
//на парните позиции од другиот број, во истиот редослед. Соодветно да се испечатат пораки „PAREN“ и „NE“.
//Позициите треба да се сметаат оддесно-налево (најмалку значајната цифра е на позиција 1)
//For example:
//Input    Result
//12345678 1357
//PAREN
int main()
{
    int number1, number2;

    cin>>number1>>number2;

    int minNumber = number1, maxNumber = number2;

    bool parenEkvivalent = 1;

    if(number2<number1)
    {
        maxNumber = number1;
        minNumber = number2;
    }

    while(minNumber!=0 && maxNumber!=0 && parenEkvivalent==1)
    {

        int minDigit = minNumber % 10;
        int maxDigit = (maxNumber %100)/10;

        minNumber = minNumber /10;
        maxNumber = maxNumber /100;

        if(minDigit != maxDigit)
        {
            parenEkvivalent = 0;
        }
    }

    if(parenEkvivalent==1 && maxNumber!=0)
    {
        parenEkvivalent = 0;
    }

    if(parenEkvivalent==1)
    {
        cout<<"PAREN"<<endl;
    }
    else
    {
        cout<<"NE E PAREN"<<endl;
    }

    return 0;
}
