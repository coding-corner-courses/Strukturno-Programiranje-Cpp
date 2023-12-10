#include <iostream>

using namespace std;

//Задача 2.
//Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри.
//Обратен број е бројот составен од истите цифри, но во обратен редослед (на пример, 653 е обратен број на бројот 356).
//Од тастатура се внесува природен број n ( n > 9). Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“.
//Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).
//For example:
//Input    Result
//5
//Brojot ne e validen
int main()
{
    int n;

    cin>>n;

    if(n <= 9)
    {
        cout<<"Brojot ne e validen"<<endl;
    }
    else
    {

        int interestingNumber = 9;

        for(int i=10; i<n ; i++)
        {

            int newNumber = i;
            int numberOfDigits = 0, reverseNumber = 0;

            while(newNumber != 0)
            {
                int digit = newNumber%10;
                reverseNumber = reverseNumber * 10 + digit;
                numberOfDigits++;
                newNumber = newNumber / 10;
            }

            if(reverseNumber % numberOfDigits == 0)
            {
                interestingNumber = i;
            }
        }

        cout<<interestingNumber<<endl;
    }

    return 0;
}
