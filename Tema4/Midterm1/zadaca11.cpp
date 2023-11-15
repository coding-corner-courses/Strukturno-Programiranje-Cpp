#include <iostream>

using namespace std;

//Задача 11
//Цик-цак е број за кој важи дека за секој пар соседни цифри во бројот важи дека
//едната е помала од 5, а другата е поголема или еднаква на 5.
//На пример, ако бројот x е составен од цифрите a, b, c и d, тогаш за нив важи:
//a<5, b>=5, c<5, d>=5 или a>=5, b<5, c>=5, d<5
//
//Пр.  508294, 2638, 81
//Од тастатура се читаат непознат број на цели броеви поголеми од или еднакви на 10
//(броевите помали од 10 се игнорираат).
//Читањето завршува во моментот кога ќе се прочита знак што не е цифра. Да се испечатат сите цик-цак броеви.
//For example:
//Input    Result
//5005
//5050
//60619
//21365
//12345
//8045
//8050
//k
//5050
//60619
//8050
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
            bool rightDigitWasGreater = 1;

            while(newNumber > 9)
            {

                int rightDigit = newNumber % 10;
                int leftDigit = (newNumber % 100)/10;

                // Ако е број со две еднакви соседни цифри, не е цик цак
                if(leftDigit == rightDigit){
                    isZikZak = 0;
                    break;
                }
                 //Проверка дали е прва итерација
                else if(newNumber == number)
                {
                    rightDigitWasGreater = rightDigit >= 5;

                }
                else if(rightDigit == leftDigit || (rightDigitWasGreater==1 && rightDigit >= 5) || (rightDigitWasGreater==0 && rightDigit < 5))
                {
                    isZikZak = 0;
                    break;
                }
                else
                {
                    rightDigitWasGreater = rightDigit >= 5;
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
