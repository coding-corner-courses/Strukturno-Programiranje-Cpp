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

// Бидејќи не го знам целосниот текст на задачата, имам две претпоставки направено
// 1. Едноцифрените броеви неможе да се собирачи 
// 2. Собирачите од кои се добива бројот секогаш се двоцифрени броеви

// Доколку знаете како е точниот текст на задачата, контактирајте ме за да ја поправам задачата и решението
int main()
{
    int number;

    cin>>number;

    int halfOfNumber = number%2==0 ? number/2 : number/2+1;

    bool addendsExist = 0;

    for(int firstAddend=1; firstAddend<=halfOfNumber; firstAddend++)
    {

        int secondAddend = number - firstAddend;

        if(firstAddend>=10 && secondAddend>=10 && firstAddend<100 && secondAddend<100)
        {

            int differenceFirstAddend = abs(firstAddend/10 - firstAddend%10);
            int differenceSecondAddend = abs(secondAddend/10 - secondAddend%10);

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
