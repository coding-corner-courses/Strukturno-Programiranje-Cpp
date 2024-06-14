#include <iostream>
#include <math.h>

using namespace std;

//Испит Јуни 13, 2024 (Задача 1)
//Напиши програма која ќе овозмо/и внесување на број преку тастатура.
//Програмата е потребно да провери дали внесениот број може да се претстави како збир од два броеви чијашто прва и последна цифра ќе се разликуваат за еден.
//Да се отпечатат пронајдените броеви, а доколку не постојат да се отпечати  “Nema!”.
//
// Пр. Внесен број 44
// 44 = 10 + 34
// Излез: 10 34

// Пр. Внесен број 450
// 450 = 45 + 405
// Излез: 45 405

// Пр. Внесен број 1023
// 1023 = 21 + 1002
// Излез: 21 1002

// Ја наоѓа првата цифра од бројот, пр. за бројот 34567 ќе врати 3
int findFirstDigit(int number){

    if(number<10){
        return number;
    }

    return findFirstDigit(number/10);
}

int main()
{
    int number;

    cin>>number;

    int halfOfNumber = number%2==0 ? number/2 : number/2+1;

    bool addendsExist = 0;

    for(int firstAddend=1; firstAddend<=halfOfNumber; firstAddend++)
    {

        int secondAddend = number - firstAddend;

        if(firstAddend>=10 && secondAddend>=10)
        {

            int differenceFirstAddend = abs(findFirstDigit(firstAddend)- firstAddend%10);
            int differenceSecondAddend = abs(findFirstDigit(secondAddend) - secondAddend%10);

            if(differenceFirstAddend==1 && differenceSecondAddend==1)
            {
                addendsExist = 1;
                cout<<firstAddend<<" "<<secondAddend<<endl;
            }
        }
    }

    if(!addendsExist)
    {
        cout<<"Nema!"<<endl;
    }

    return 0;
}
