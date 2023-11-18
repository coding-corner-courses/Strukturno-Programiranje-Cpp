#include <iostream>

using namespace std;

//Задача 3 (Парни и непарни позиции)
//Од тастатура се внесуваат непознат број на цели броеви.
//Внесувањето завршува кога наместо број ќе биде внесен некаков знак.
//Да се напише програма која на екран ќе го испечати бројот чиј што збир на цифри на парни позиции е најмал број и бројот чиј што
//збир на цифри на непарни позиции е најголем. Да се претпостави дека позициите започнуваат од најмалку значајната цифра и таа се наоѓа на позиција 1.
//Доколку повеќе од два броја имаат ист најмал збир на цифри на парни позиции, или имаат ист најголем збир на цифри на непарни позиции, програмата да го испечати првиот од нив според редоследот на внесување.
//
//Пример:
//За бројот 5094: Збирот на цифрите на парни позиции е 9 + 5 = 14, а збирот на цифри на непарни позиции 4+0=0
//
//Input: 1234 4345 2345 7324 8643 2301 e
//
//Output: Najmal: 2301
//	Najgolem: 8643

int main()
{
    int number;

    cin>>number;

    int minNumber = 0;
    int maxNumber = 0;
    int minEvenPositions = INT_MAX;
    int maxOddPositions = 0;
    bool isOddPosition = 1;

    while (number != 0)
    {

        int newNumber = number;
        int sumOddPositions = 0;
        int sumEvenPositions = 0;

        while(newNumber != 0)
        {

            int digit = newNumber % 10;

            if(isOddPosition == 1)
            {
                sumOddPositions+=digit;
                isOddPosition = 0;
            }
            else
            {
                sumEvenPositions+=digit;
                isOddPosition = 1;
            }

            newNumber = newNumber /10;
        }

        if(minEvenPositions > sumEvenPositions)
        {
            minNumber = number;
            minEvenPositions = sumEvenPositions;
        }

        if(maxOddPositions < sumOddPositions )
        {
            maxNumber = number;
            maxOddPositions = sumOddPositions;
        }

        cin>>number;
    }

    cout<<"Max: "<<maxNumber<<endl;
    cout<<"Min: "<<minNumber<<endl;

    return 0;
}
