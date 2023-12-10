#include <iostream>

using namespace std;

//Задача 4
//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед
//(на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9).
//Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
//For example:
//Input: 5
//Result: Brojot ne e validen
//
//а. Направи функција која ќе го наоѓа бројот во обратен редослед за даден број
//б. Направи функција која ќе го враќа бројот на цифри за даден број
//Ц. Направи функција која ќе ја проверува валидноста на внесениот број

int getReverseNumber(int number)
{
    int newNumber = number;
    int reverseNumber = 0;

    while(newNumber != 0)
    {
        int digit = newNumber%10;
        reverseNumber = reverseNumber * 10 + digit;
        newNumber = newNumber / 10;
    }

    return reverseNumber;
}

int getNumberOfDigits(int number)
{

    int newNumber = number;
    int numberOfDigits = 0;

    while(newNumber != 0)
    {
        int digit = newNumber%10;
        numberOfDigits++;
        newNumber = newNumber / 10;
    }

    return numberOfDigits;
}

int isValidNumber(int number)
{

    if(number <= 9)
    {
        return 0;
    }

    return 1;
}


int main()
{
    int n;

    cin>>n;

    if(isValidNumber(n)==0)
    {
        cout<<"Brojot ne e validen"<<endl;
    }
    else
    {

        int interestingNumber = 9;

        for(int i=n-1; i>9 ; i--)
        {

            int numberOfDigits = getNumberOfDigits(i);
            int reverseNumber = getReverseNumber(i);

            if(reverseNumber % numberOfDigits == 0)
            {
                interestingNumber = i;
            }
        }

        cout<<interestingNumber<<endl;
    }

    return 0;
}
