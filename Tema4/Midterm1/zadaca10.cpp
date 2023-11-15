#include <iostream>

using namespace std;

//Задача 10
//Цик-цак е број за кој што важи дека за секој пар соседни цифри,
//тие се наизменично поголеми односно помали една во однос на друга.
//На пример, ако бројот x е составен од цифрите a, b, c, d и е, тогаш за нив важи:
//a>b, b<c, c>d, d<e или a<b, b>c, c<d, d>e
//Пр. 343, 4624, 6231209
//Од тастатура се читаат непознат број цели броеви поголеми од или еднакви на 10
//броевите помали од 10 се игнорираат).
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
//For example:
//Input    Result
//343
//22
//4624
//123456
//6231209
//9
//k
//343
//4624
//6231209
int main()
{
    int number;

    cin>>number;

    while(number!=0)
    {

        if(number >= 10)
        {

            int newNumber = number;
            bool isZikZak = 1;

            // previous check
            bool rightDigitWasGreater;

            while(newNumber > 9)
            {

                int rightDigit = newNumber % 10;
                int leftDigit = (newNumber % 100)/10;

                // Ако е број со две еднакви соседни цифри, не е цик цак
                if(leftDigit == rightDigit)
                {
                    isZikZak = 0;
                    break;
                }
                //Проверка дали е прва итерација и доделување на иницијална вредност
                else if(newNumber == number)
                {
                    rightDigitWasGreater = rightDigit > leftDigit;

                }
                else if(rightDigitWasGreater==1 && rightDigit > leftDigit || rightDigitWasGreater==0 && rightDigit < leftDigit)
                {
                    isZikZak = 0;
                    break;
                }
                else
                {
                    rightDigitWasGreater = rightDigit > leftDigit;
                }

                newNumber = newNumber / 10;
            }

            if(isZikZak)
            {
                cout<<number<<endl;
            }
        }

        cin>>number;
    }

    return 0;
}
